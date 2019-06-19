#include <stdio.h>
#include <unistd.h>

int main()
{
    int a;
    int *p = &a;

    printf("Please enter an integer: ");
    scanf("%d", &a);
    printf("The integer you entered is: %d.\n", *p);

    printf("Please enter another integer: ");
    scanf("%d", p);
    printf("The integer you entered this time is: %d.\n", a);

    pause();
    return 0;
}