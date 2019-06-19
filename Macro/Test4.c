#include <stdio.h>
#include <unistd.h>

#define SHOWLIST(...) printf(#__VA_ARGS__)
#define PRINT(format, ...) printf(#format, ##__VA_ARGS__)

int main()
{
    SHOWLIST(FishC, 1, 2\n);
    PRINT(num = %d\n, 1);
    PRINT(Hello World!\n);

    pause();
    return 0;
}