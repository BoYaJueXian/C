#include <stdio.h>
#include <unistd.h>

int main()
{
    char str[128];
    printf("Please enter one sentence: ");
    scanf("%s", str);
    printf("The sentence you entered is: %s\n", str);
    printf("The address of str is: %p.\n", str);
    printf("The address of str is: %p.\n", &str[0]);

    pause();
    return 0;
}