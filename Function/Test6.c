#include <stdio.h>
#include <unistd.h>

char *GetWord(char a)
{
    switch(a)
    {
        case 'A': return "Apple";
        case 'B': return "Banana";
        case 'C': return "Cat";
        case 'D': return "Dog";
        default: return "None";
    }
}

int main()
{
    char input;
    printf("Please enter a letter: ");
    scanf("%c", &input);

    printf("%s\n", GetWord(input));

    pause();
    return 0;
}