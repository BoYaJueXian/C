#include <stdio.h>
#include <unistd.h>

int main()
{
	char free, rain;

	printf("Are you free?(Y/N)");
	scanf("%c", &free);

	getchar();

	printf("Will it rain tomorrow?(Y/N)");
	scanf("%c", &rain);

	if (free == 'Y')
	{
		if (rain == 'Y')
		{
			printf("Remember to take the umbrella!\n");
		}
	}
	else
	{
		printf("How about next Monday?\n");
	}

	pause();
	return 0;
}