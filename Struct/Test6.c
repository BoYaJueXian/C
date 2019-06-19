#include <stdio.h>
#include <unistd.h>

int main()
{
    struct Test
    {
        int a, b;
    }test1, test2;

    test1.a = 1;
    test1.b = 2;

    test2 = test1;

    printf("test2.a = %d    test2.b = %d\n", test2.a, test2.b);

    pause();
    return 0;
}