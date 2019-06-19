#include <stdio.h>
#include <unistd.h>

int main()
{
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int b[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}};
    int c[][4] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 11, 12}};
    int d[3][4] = {{0, 2}, {5}, {10}};
    int e[3][4] = {0};
    //int f[3][4] = {[0][0] = 2, [2][3] = 5};

	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}

    for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
            printf("%2d ", b[i][j]);
		}
		printf("\n");
	}

    for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
            printf("%2d ", c[i][j]);
		}
		printf("\n");
	}

    for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
            printf("%2d ", d[i][j]);
		}
		printf("\n");
	}

    for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
            printf("%2d ", e[i][j]);
		}
		printf("\n");
	}

    /*
    for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
            printf("%2d ", f[i][j]);
		}
		printf("\n");
	}
    */
    
    pause();
    return 0;
}