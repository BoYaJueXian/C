#include <stdio.h>
#include <unistd.h>

int Square(int n)
{
    return n * n;
}

int main()
{
    int n;
    int (*fp)(int);
    printf("Please enter an integer: ");
    scanf("%d", &n);

    fp = Square;
    //fp = &Square;
    printf("%d * %d = %d\n", n, n, (*fp)(n));
    //printf("%d * %d = %d\n", n, n, fp(n));

    pause();
    return 0;
}