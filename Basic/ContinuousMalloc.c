#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int num, i;

    printf("Please enter the number of integers: ");
    scanf("%d", &num);
    ptr = (int *)malloc(num * sizeof(int));

    for (i = 0; i < num; i++)
    {
        printf("Please enter Num%d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("The integers you entered are: ");
    for (i = 0; i < num; i++)
    {
        printf("%d, ", ptr[i]);
    }
    printf("\b\b.\n");
    free(ptr);

    pause();
    return 0;
}