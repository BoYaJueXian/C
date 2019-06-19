#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char str1[] = "Original string";
	char str2[] = "New string";
	char str3[100];
	char str4[20];

	strcpy(str1, str2);
	//strcpy(str2, str1);
	strcpy(str3, "Copy successful.");
	strncpy(str4, str1, 5);
	str4[5] = '\0';

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);

	pause();
	return 0;
}