#include <stdio.h>
#include <unistd.h>

int main()
{
    int num1 = 1;
    const int num2 = 2;
    int *const p1 = &num1;
    const int *p2 = &num2; //int const *p2
    const int *const p3 = &num2;
    const int *const *p4 = &p3;

    printf("num2: %d, &num2: %p2.\n", num2, &num2);
    printf("*p2: %d, p2: %p2.\n", *p2, p2);

    p2 = &num1;
    //*p2 = num1;
    printf("num1: %d, &num1: %p2.\n", num1, &num1);
    printf("*p2: %d, p2: %p2.\n", *p2, p2);

    num1 = 3;
    printf("num1: %d, &num1: %p2.\n", num1, &num1);
    printf("*p2: %d, p2: %p2.\n", *p2, p2);

    *p1 = 4;
    //p1 = &num2;
    printf("*p1: %d.\n", *p1);

    //*p3 = 4;
    //p3 = &num1;

    printf("p4: %p, &p3: %p.\n", p4, &p3);
    printf("*p4: %p, p3: %p, &num2: %p.\n", *p4, p3, &num2);
    printf("**p4: %d, *p3: %d, num: %d.\n", **p4, *p3, num2);

    pause();
    return 0;
}