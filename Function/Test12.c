#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int i = 0;
    {
        int i = 1;
        {
            int i = 2;
            printf("i = %d\n", i);
        }
        {
            printf("i = %d\n", i);
            int i = 3;
            printf("i = %d\n", i);
        }
        printf("i = %d\n", i);
    }
    printf("i = %d\n", i);

    pause();
    return 0; 
}