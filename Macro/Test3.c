#include <stdio.h>
#include <unistd.h>

#define STRING(s) #s
#define TOGETHER(x, y) x##y

int main()
{
    printf("%s\n", STRING(FishC));
    printf(STRING(Hello     %s%d.\n), STRING(World), 0);

    printf("%d\n", TOGETHER(1, 2));

    pause();
    return 0;
}