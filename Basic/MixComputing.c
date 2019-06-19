#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main()
{
	printf("int output = %d\n", 1 + (int)(1 + 0.8));
	printf("float output = %f\n", pow(2, 3) + 2.0);

	pause();
	return 0;
}