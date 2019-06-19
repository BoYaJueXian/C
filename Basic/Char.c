#include <stdio.h>
#include <unistd.h>

int main()
{
	char a[4] = { 'F', 'i', 's', '\0' };
	char b[3];
	b[0] = 'h';
	b[1] = 'C';
	b[2] = '\0';
	char c[] = { "66" };
	char d[] = { '6', '6', '\0' };
	char e[] = "66";
	printf("%s%s%s%s%s\n", a, b, c, d, e);

	pause();
	return 0;
}