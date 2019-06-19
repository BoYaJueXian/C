#include <stdio.h>
#include <unistd.h>

void GetArray(int b[10])
{
    printf("The size of b is: %ld.\n", sizeof(b));
    printf("in GetArray: \n");
    
    int i;
    b[5] = 10;

    for (i = 0; i < 10; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }
}

int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("The size of a is :%ld.\n", sizeof(a));
    GetArray(a);

    printf("in main: \n");
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    pause();
    return 0;
}