#include <stdio.h>
#include <unistd.h>

int i;

int main()
{
    auto int i = 1;
    register int j = 2;

    printf("i = %d\n", i);
    //printf("The address of j is: %p.\n", &j);

    pause();
    return 0;
}