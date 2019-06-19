#include <stdio.h>
#include <unistd.h>

#define NUM 10
int main()
{
	int i, sum;
	float average;
	int mark[NUM];

	printf("Please enter the marks the 1st student gets: ");
	scanf("%d", &mark[0]);
	printf("Please enter the marks the 2nd student gets: ");
	scanf("%d", &mark[1]);
	printf("Please enter the marks the 3rd student gets: ");
	scanf("%d", &mark[2]);
	sum = mark[0] + mark[1] + mark[2];
	for (i = 3; i < NUM; i++)
	{
		printf("Please enter the marks the %ith student gets: ", i + 1);
		scanf("%d", &mark[i]);
		sum += mark[i];
	}
	average = (float)sum / NUM;
	printf("The marks have been registered completely, the average marks of this exam are %.2f.\n", average);

	pause();
	return 0;
}