#include <stdio.h>
#include <unistd.h>

 void a();
 void b();
 void c();

 int count;
 //static int count;

 int main()
{
    a();
    b();
    c();
    b();
    printf("count  = %d", count);

    pause();
    return 0;
}