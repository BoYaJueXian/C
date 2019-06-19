#include <stdio.h>
#include <unistd.h>

void QuickSort(int array[], int left, int right)
{
    int i = left, j = right;
    int temp;
    int pivot;

    pivot = array[(int)((left + right) / 2)];

    while (i < j)
    {
        while (array[i] < pivot && i < j)
        {
            i++;
        }
        while (array[j] > pivot && j > i)
        {
            j--;
        }
        
        if (i <= j)
        //if (i = j) // save the positon of the pivot
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }

        if (left < j)
        {
            QuickSort(array, left, j);
        }
        if (i < right)
        {
            QuickSort(array, i, right);
        }
    }
}

int main()
{
    int array[] = {3, 2, 1, 4, 8, 7, 6, 5};
    //int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
    int i, length;

    length = sizeof(array) / sizeof(array[0]);
    QuickSort(array, 0, length - 1);

    for (i = 0; i < length; i++)
    {
        printf("%d  ",array[i]);
    }
    printf("\n");
    
    pause();
    return 0;
}