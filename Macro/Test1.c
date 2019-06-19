#include <stdio.h>
#include <unistd.h>

#define URL "http://www.fishc.com"
#define NAME "FishC"
#define BOSS "Turtle"
#define YEAR 2010
#define MONTH 5
#define DAY 20

int main()
{
	printf("%s is established on %d.%d.%d.\n", NAME, YEAR, MONTH, DAY);
	printf("%s is set up by %s.\n", NAME, BOSS);
	printf("%s's url is \"%s\".\n", NAME, URL);
	/*"ABC": 'A' 'B' 'C' '\0'*/

	pause();
	return 0;
}