#include <stdio.h>
#include <unistd.h>

int main()
{
	int a = 5, b = 3;

	printf("%d\n", 3 > 1 && 1 < 2);
	printf("%d\n", 3 + 1 || 2 == 0);
	printf("%d\n", !(a + b));
	printf("%d\n", !0 + 1 < 1 || !(3 + 4));
	printf("%d\n", 'a' - 'b' && 'c');

	(a = 0) && (b = 5);
	printf("a = %d, b = %d\n", a, b);

	(a = 1) || (b = 5);
	printf("a = %d, b = %d\n", a, b);

	(a = 0) || (b = 5);
	printf("a = %d, b = %d\n", a, b);

	pause();
	return 0;
}