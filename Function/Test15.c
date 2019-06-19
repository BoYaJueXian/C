#include <stdio.h>
#include <unistd.h>

void Function()
{
    static int count = 0;
    //int count = 0;
    printf("count = %d\n", count);
    count++;
}

int main()
{
    int i;
    //count++;
    for (i = 0; i < 10; i++)
    {
        Function();
    }

    pause();
    return 0;
}