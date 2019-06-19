#include <stdio.h>
#include <unistd.h>

int main()
{
	short i;
	unsigned short j;
	unsigned short k;

	i = -1;
	j = -1;
	k = -2;


	printf("%d\n", i);
	printf("%u\n", j);
	printf("%u\n", k);

	pause();
	return 0;
}