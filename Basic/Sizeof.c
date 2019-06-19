#include <stdio.h>
#include <unistd.h>

int main()
{
	int i;
	char j;
	float k;
	bool p;
	enum Day
	{
		Mon = 1, Tue, Wed, Thu, Fri, Sat, Sun
	}day;

	i = 12;
	j = 'C';
	k = 3.14;
	p = 0;

	printf("The size of int is %lu.\n", sizeof(int));
	printf("The size of i is %lu.\n", sizeof(i));
	printf("The size of char is %lu.\n", sizeof(char));
	printf("The size of j is %lu.\n", sizeof j);
	printf("The size of float is %lu.\n", sizeof(float));
	printf("The size of k is %lu.\n", sizeof(k));
	printf("The size of _Bool is %lu.\n", sizeof(bool));
	printf("The size of p is %lu.\n", sizeof p);
	printf("The size of enum is %lu.\n", sizeof(enum Day));
	printf("The size of day is %lu.\n", sizeof day);
	
	pause();
	return 0;
}