#include <stdio.h>
#include <unistd.h>

int Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;
    printf("Please enter two different integers: ");
    scanf("%d%d", &a, &b);
    printf("The bigger integer is %d.\n", Max(a, b));

    pause();
    return 0;
}