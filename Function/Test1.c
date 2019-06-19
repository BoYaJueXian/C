#include <stdio.h>
#include <unistd.h>

int Gauss(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    return sum;
}

int main()
{
    int n, result;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    printf("1 + 2 + ... + %d = %d\n", n, Gauss(n));

    pause();
    return 0;
}