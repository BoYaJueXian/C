#include <stdio.h>
#include <unistd.h>

void Recursion()
{
    static int count = 10;
    if (count--)
    {
        printf("Hi!\n");
        Recursion();
    }
}

int main()
{
    Recursion();
    
    pause();
    return 0;
}