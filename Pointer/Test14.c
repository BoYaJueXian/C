#include <stdio.h>
#include <unistd.h>
 
int main()
{
    char *a[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    char **b;
    char **c[5];

    b = &a[5];
    for (int i = 0; i < 5; i++)
    {
        c[i] = &a[i];
    }

    printf("b: %s.\n", *b);
    printf("c: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%s ", *c[i]);
    }
    printf(".\n");

    pause();
    return 0;
}