#include <stdio.h>
#include <unistd.h>

int main()
{
	int a[10] = { 0 };
	int b[5] = { 2 };
	int c[10];
	int d[10] = { 1, 2, 3, 4 };
	int e[] = { 1, 2, 3, 4, 5 };
	int f[10] = { [3] = 3, [5] = 5, [8] = 8 };
	int g[] = { [3] = 3, [5] = 5, [8] = 8 };
	
	for (int i = 0; i < 10; i++)
	{
		printf("%-10d\t%-10d\t%-10d\t%-10d\t%-10d\t%-10d\t%-10d\n", a[i], b[i], c[i], d[i], e[i], f[i], g[i]);
	}

	pause();
	return 0;
}