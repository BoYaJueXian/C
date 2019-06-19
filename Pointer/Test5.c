#include <stdio.h>
#include <unistd.h>

int main()
{
    char a[] = "FishC";
    int b[] = {1, 2, 3, 4, 5};

    char *pa = a;
    int *pb;
    pb = b;
    
    printf("*pa = %c, *(pa + 1) = %c, *(pa + 2) = %c\n", *pa, *(pa + 1), *(pa + 2));
    printf("*pb = %d, *(pb + 1) = %d, *(pb + 2) = %d\n", *pb, *(pb + 1), *(pb + 2));
    printf("*b = %d, *(b + 1) = %d, *(b + 2) = %d\n", *b, *(b + 1), b[2]);
    
    pause();
    return 0;
}