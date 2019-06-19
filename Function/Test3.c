#include <stdio.h>
#include <unistd.h>

void Swap(int *a, int *b)
{
    int temp;

    printf("in Swap: Original a = %d, original b = %d.\n", *a, *b);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("in Swap: New a = %d, new b = %d.\n", *a, *b);
}

int main()
{
    int a = 3, b = 5;
    printf("in main: Original a = %d, original b = %d.\n", a, b);
    Swap(&a, &b);
    printf("in main: New a = %d, new b = %d.\n", a, b);

    pause();
    return 0;
}


// void Swap(int a, int b)
// {
//     int temp;

//     printf("in Swap: Original a = %d, Original b = %d.\n", a, b);

//     temp = a;
//     a = b;
//     b = temp;

//     printf("in Swap: New a = %d, New b = %d.\n", a, b);
// }

// int main()
// {
//     int a = 3, b = 5;
//     printf("in main: Original a = %d, Original b = %d.\n", a, b);
//     Swap(a, b);
//     printf("in main: New a = %d, New b = %d.\n", a, b);

//     pause();
//     return 0;
// }