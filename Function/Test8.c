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

int main()
{
    printf("3 + 5 = %d\n", Compute(Add, 3, 5));
    printf("6 - 2 = %d\n", Compute(Substract, 6, 2));

    pause();
    return 0;
}