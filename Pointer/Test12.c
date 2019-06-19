#include <stdio.h>
#include <unistd.h>

int main()
{
    int num = 1024;
    int *pa = &num;
    char *pb = "FishC";
    void *pc;

    pc = pa;
    printf("pa: %p, pc: %p.\n", pa, pc);
    printf("*pc: %d.\n", *(int *)pc);
    
    pc = pb;
    printf("pb: %p. pc: %p.\n", pb, pc);
    printf("*pc: %c.\n", *(char *)pc);

	pause();
    return 0;
}