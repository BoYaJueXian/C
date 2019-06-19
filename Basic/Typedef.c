#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef int integer;
typedef struct Date
{
    integer year;
    integer month;
    int day;
} DATE, *PDATE;
// 'Typedef' isn't simple substitution like '#define'. It envelops certain class.

int main()
{
    DATE *date;
    date = (PDATE)malloc(sizeof(DATE)); // not '*PDATE'
    if (date == NULL)
    {
        printf("RAM allocatioin failed!\n");
        exit(1);
    }
    date -> year = 2019;
    date -> month = 4;
    date -> day = 3;

    printf("%d-%d-%d\n", date -> year, date -> month, date -> day);

    pause();
    return 0;
}