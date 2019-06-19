#include <stdio.h>
#include <unistd.h>

long Factorial(int num)
{
    long product = 1;
    while (num)
    {
        product *= num;
        num--;
    }
    
    return product;
}

int main()
{
    int num;
    printf("Please enter an integer: \n");
    scanf("%d", &num);
    printf("result: %ld\n", Factorial(num));

    pause();
    return 0;
}