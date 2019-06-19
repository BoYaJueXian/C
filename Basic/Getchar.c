#include <stdio.h>
#include <unistd.h>

int main()
{
	int count = 0;
	
	printf("Please enter a sentence: ");
	while (getchar() != '\n')
	{
		count++;
	}
	printf("You have entered %d characters.\n", count);

	pause();
	return 0;
}