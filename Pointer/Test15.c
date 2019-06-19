#include <stdio.h>
#include <unistd.h>
 
int main()
{
    int array[][4] = {{0, 1, 2, 3},
                      {4, 5, 6, 7},
                      {8, 9, 10, 11}};
    int (*p)[4] = array;
    //int **p = array;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%2d ", *(*(p + i) + j));
            //printf("%2d", *(*(array + i) + j));
        }
        printf("\n");
    }

    pause();
    return 0;
}