#include <stdio.h>
#include <unistd.h>

int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d\t", j, i, i * j);
			//printf("%d * %d = %2d    ", j, i, i * j);
		}
		putchar('\n');
	}

	pause();
	return 0;
}