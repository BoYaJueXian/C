#include <stdio.h>
#include <unistd.h>

int main()
{
    char a = 0, b = 0;
    int *p = (int *)&b;

    *p = 258;

    printf("a = %d\nb = %d\n", a, b);

    pause();
    return 0;
}