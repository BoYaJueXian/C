#include <stdio.h>
#include <unistd.h>

inline int Square(int x)
{
    return x * x;
}

int main()
{
    int i = 1;

    while (i <= 100)
    {
        printf("%d^2 = %d\n", i - 1, Square(i++));
    }

    //int i = 5;
    //printf("%d    %d    %d", i--, i, ++i, i, i++);
    // // Calculation turn: right -> left
    // // i++, i--: Push first, then save (i+1) or (i-1) into buffer.
    // // i, ++i, --i: save i or (i+1) or (i-1) into buffer, then push together after completing the whole calculation. Their outputs are usually equal.
    // // POP turn: left -> right

    pause();
    return 0;
}