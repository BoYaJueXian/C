#include <stdio.h>
#include <unistd.h>
#include <math.h>

#define R 1
#define pi 3.14
#define V ((pi) *(pow(R, 3)))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    int r;
    float S;

    printf("The volumn of the ball is %.2f.\n", V);

    printf("Please enter the radius: ");
    scanf("%d", &r);
    //#undef pi
    S = pi * pow(r, 2);
    printf("The area of the circle is %.2f.\n", S);

    getchar();

    int x, y;
    printf("Please enter two integers: ");
    scanf("%d%d", &x, &y);
    printf("%d is bigger.\n", MAX(x, y));

    pause();
    return 0;
}