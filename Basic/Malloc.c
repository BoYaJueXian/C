#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("RAM allocation failed!\n");
        exit(1);
    }
    
    printf("Please enter an integer: ");
    scanf("%d", ptr);
    printf("The integer you entered is %d.\n", *ptr);

    free(ptr);
    printf("ptr = %d\n", *ptr);

    pause();
    return 0;
}