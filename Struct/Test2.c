#include <stdio.h>
#include <unistd.h>

int main()
{
    struct A
    {
        char a;
        int b;
        char c;
    } a = {'i', 1, 'j'};

    struct B
    {
        char a;
        char b;
        int c;
    } b = {'i', 'j', 1};

    printf("The size of a is %ld.\n", sizeof(a));
    printf("The size of b is %ld.\n", sizeof(b));

    pause();
    return 0;
}