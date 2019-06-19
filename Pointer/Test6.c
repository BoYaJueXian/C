#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char *str = "I love FishC.com!";
    int i, length;
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    pause();
    return 0;
}