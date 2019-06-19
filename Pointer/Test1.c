#include <stdio.h>
#include <unistd.h>

int main()
{
    char a = 'A';
    int b = 123;

    char *pa = &a;
    int *pb = &b;

    printf("a = %c\n", *pa);
    printf("b = %d\n", *pb);

    *pa = 'B';
    *pb += 1;
    
    printf("newa = %c\n", *pa);
    printf("newb = %d\n", *pb);

    printf("The size of  pa is %ld.\n", sizeof(pa));
    printf("The size of  pb is %ld.\n", sizeof(pb));

    printf("The address of a is: %p.\n", pa);
    printf("The address of b is: %p.\n", pb);
    
    pause();
    return 0;
}