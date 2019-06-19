#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char str1[] = "I love FishC.com!";
	printf("The size of str1 is %ld.\n", sizeof(str1));
	printf("The length of str1 is %lu.\n", strlen(str1));

    //char str2[15] = "I love FishC.com!";

    char str2[20] = "I love FishC.com!";
    printf("The size of str2 is %ld.\n", sizeof(str2));
	printf("The length of str2 is %lu.\n", strlen(str2));

	pause();
    return 0;
}