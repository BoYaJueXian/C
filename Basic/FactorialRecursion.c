#include <stdio.h>
#include <unistd.h>

long Factorial(int num)
{
    long product;
    if (num > 0)
    {
        product = num * Factorial(num - 1);
    }
    else
    {
        product = 1;
    }
    
    return product;
}

int main()
{
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    printf("result: %ld\n", Factorial(num));

    pause();
    return 0;
}