#include <stdio.h>
#include <unistd.h>

int main()
{
    char *str = "I love FishC.com!";
    int count = 0;

    while (*str++ != '\0')
    {
        count++;
    }
    printf("There are %d characters totally.\n", count);

    //char str[] = "I love FishC.com!";
    //char *target = str;
    //int count = 0;

    //while (*target++ != '\0')
    //{
    //    count++;
    //}
    //printf("There are %d characters totally.\n", count);

    pause();
    return 0;
}