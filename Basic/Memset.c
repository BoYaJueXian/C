#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main()
{
    int *ptr = NULL;
    int i;

    ptr = (int *)malloc(N * sizeof(int));
    if (ptr == NULL)
    {
        exit(1);
    }

    memset(ptr, 0, N * sizeof(int)); // Initialize RAM
    for (i = 0; i < N; i++)
    {
        printf("%d, ", ptr[i]);
    }
    printf("\b\b \n");
    free(ptr);

    pause();
    return 0;
}