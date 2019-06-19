#include <stdio.h>
#include <unistd.h>

int main()
{
    char a[] = "FishC";
    int b[] = {1, 2, 3, 4, 5};
    float c[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double d[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printf("a[0] -> %p, a[1] -> %p, a[2] -> %p\n", a, &a[1], &a[2]);
    printf("b[0] -> %p, b[1] -> %p, b[2] -> %p\n", b, &b[1], &b[2]);
    printf("c[0] -> %p, c[1] -> %p, c[2] -> %p\n", c, &c[1], &c[2]);
    printf("d[0] -> %p, d[1] -> %p, d[2] -> %p\n", d, &d[1], &d[2]);
    
    pause();
    return 0;
}