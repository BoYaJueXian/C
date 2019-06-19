#include <stdio.h>
#include <unistd.h>

int main()
{
	int a, b;

	printf("Please enter two numbers: ");
	scanf("%d%d", &a, &b);
	//scanf("%d %d", &a, &b);

	if (a != b)
	{
		if (a > b)
		{
			printf("%d > %d\n", a, b);
		}
		else
		{
			printf("%d < %d\n", a, b);
		}
	}
	else
	{
		printf("%d = %d\n", a, b);
	}

	pause();
	return 0;
}