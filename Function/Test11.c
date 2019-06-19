#include <stdio.h>
#include <unistd.h>

void a()
{
    extern int count;
    count++;
}

void b()
{
    extern int count;
    count++;
}

void c()
{
    extern int count;
    count++;
}

int count;


int main()
{
    a();
    b();
    c();
    b();

    printf("count = %d\n", count);

    pause();
    return 0;
}