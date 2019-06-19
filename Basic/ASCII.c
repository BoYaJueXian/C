#include <stdio.h>
#include <unistd.h>

int main()
{
	char a = 70, b = 105, c = 115, d = 104, e = 67, f = 'A';
	unsigned char g = 160;
	printf("%c%c%c%c%c = %d%d%d\n", a, b, c, d, e, f, f, g);

	pause();
	return 0;
}