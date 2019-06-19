#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int));

    printf("Stack: %p -> %p\n", &ptr1, &ptr2);
    printf("Heap: %p -> %p\n", ptr1, ptr2);

    ptr1 = (int *)realloc(ptr1, 2 * sizeof(int));;
    printf("Heap: %p -> %p\n", ptr1, ptr2);

    ptr1 = (int *)realloc(ptr1, 20 * sizeof(int));;
    printf("Heap: %p -> %p\n", ptr1, ptr2);

    pause();
    return 0;
}