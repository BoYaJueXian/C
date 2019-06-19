#include <stdio.h>
#include <unistd.h>

int a, b = 2;

void Function()
{
    int b;
    a = 1;
    b = 3;
    printf("In Funciton: a = %d, b = %d.\n", a, b);
}

int main()
{
    printf("In main: Original a = %d, original b = %d.\n", a, b);
    Function();
    printf("In main: New a = %d, new b = %d.\n", a, b);

    pause();
    return 0;
}