#include <stdio.h>
#include <unistd.h>

int main()
{
	long long int num;
	bool flag = 1;
	printf("Please enter a number: ");
	scanf("%lld", &num);
	for (int i = 2; i <= num / 2; i++)
	{
		if (num %i == 0)
		{
			flag = 0;
			break;
		}
	}

	if (flag)
	{
		printf("%lld is a prime number.", num);
	}
	else
	{
		printf("%lld is a composite number.", num);
	}

	pause();
	return 0;
}