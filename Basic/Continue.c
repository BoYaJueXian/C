#include <stdio.h>
#include <unistd.h>

int main()
{
	int a;
	while ((a = getchar()) != '\n')
	{
		if (a == 'B' || a == 67)
		{
			continue;
		}
		putchar(a);
	}
	printf("\nOver.\n");

	pause();
	return 0;
}