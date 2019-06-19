#include <stdio.h>
#include <unistd.h>

int Add(int num1, int num2)
{
    return num1 + num2;
}

int Substract(int num1, int num2)
{
    return num1 - num2;
}

int Compute(int (*fp)(int, int), int num1, int num2)
{
    return (*fp)(num1, num2);
}

int (*Op(char op))(int, int)
{
    switch(op)
    {
        case '+': return Add;
        case '-': return Substract;
    }
}

int main()
{
    int num1, num2;
    char op;
    int (*fp)(int, int);

    printf("Please enter an expression(for example, 1 + 3): ");
    scanf("%d%c%d", &num1, &op, &num2);
    fp = Op(op);
    printf("%d %c %d = %d\n", num1, op, num2, Compute(fp, num1, num2));

    pause();
    return 0;
}