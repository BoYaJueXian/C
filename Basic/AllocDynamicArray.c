#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int i, num;
    int count = 0;
    int *ptr = NULL;
    do
    {
        printf("Please enter an integer('-1' to end): ");
        scanf("%d", &num);
        count++;
        ptr = (int *)realloc(ptr, count * sizeof(int));
        if (ptr == NULL)
        {
            exit(1);
        }
        ptr[count - 1] = num;
    } while (num != -1);

    printf("The integers you entered are ");
    for (i = 0; i < count; i++)
    {
        printf("%d, ", ptr[i]);
    }
    printf("\b\b.\n");

    pause();
    return 0;
}