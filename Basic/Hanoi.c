#include <stdio.h>
#include <unistd.h>

void Hanoi(int n, char x, char y, char z)
{
    if (n == 1)
    {
        printf("%c -> %c\n", x, z);
    }
    else
    {
        Hanoi(n - 1, x, z, y);
        printf("%c -> %c\n", x, z);
        Hanoi(n - 1, y, x, z);
    }
}

int main()
{
    int n;
    printf("Please enter the number of the floors of Hanoi: \n");
    scanf("%d", &n);
    Hanoi(n, '1', '2', '3');

    pause();
    return 0;
}