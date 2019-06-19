#include <stdio.h>
#include <unistd.h>

int main()
{
    char *p[5] = {"abc", "def", "ghi", "jkl", "mno"};
    
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", p[i]);
    }

    pause();
    return 0;
}