#include <stdio.h>
#include <unistd.h>

int main()
{
    int temp[5] = {1, 2, 3, 4, 5};
    int (*p)[5] = &temp;
    // The name of an array is a pointer. 'Temp' points to temp[0]. It saves the address of temp[0].
    // '&Temp' is the first address of the whole array. Its value just equals to temp[0];
    // temp + i = &temp[i].
    // (*p) = temp.
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(*p + i));
    }

    pause();
    return 0;
}