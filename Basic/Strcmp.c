#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char str1[] = "FishC.com!";
	char str2[] = "Fishc.com!";

	if (!strcmp(str1, str2))
	{
		printf("Same.\n");
	}
	else
	{
		printf("Different.\n");
	}

	pause();
	return 0;
}