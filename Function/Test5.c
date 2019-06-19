#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int Sum(int n, ...)
{
    int i, sum = 0;
    va_list vap;

    va_start(vap, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(vap, int);
    }
    va_end(vap);

    return sum;
}

int main()
{
    int result1, result2, result3;

    result1 = Sum(3, 1, 2, 3);
    result2 = Sum(6, 1, 2, 3, 4, 5, 6);
    result3 = Sum(5, -4, 23, 5, 20, -22);

    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);
    printf("result3 = %d\n", result3);

    pause();
    return 0;
}