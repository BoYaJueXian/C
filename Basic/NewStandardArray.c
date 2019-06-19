#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int n, i;

	printf("Please enter the number of characters you will enter: ");
	scanf("%d", &n);

	char a[n + 1];
	//char a[n];

	printf("Please enter the characters: ");
	getchar();
	for (i = 0; i < n; i++)
	{
		scanf("%c", &a[i]);
	}
	a[n] = '\0';

	printf("The size of a is %lu.\n", sizeof(a));
	printf("The length of a is %lu.\n", strlen(a));

	printf("The string you entered is: %s\n", a);

	pause();
	return 0;
}