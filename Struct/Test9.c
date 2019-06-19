#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct Book
{
    char title[128];
    char author[40];
    struct Book *next;
};

void GetInput(struct Book *book)
{
    printf("Please enter the title of the book: ");
    scanf("%s", book -> title);
    printf("Please enter the author of the book: ");
    scanf("%s", book -> author);
}

void AddBook(struct Book **library) // **library -> *next -> book
{
    struct Book *book, *temp;
    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("RAM allocation failed!\n");
        exit(1);
    }
    GetInput(book);

    if (*library != NULL)
    {
        temp = *library;
        *library = book;
        book -> next = temp;
    }
    else
    {
        *library = book;
        book -> next = NULL;
    }
}

void PrintLibrary(struct Book *library)
{
    struct Book *book;
    int count = 1;

    book = library;

    while (book != NULL)
    {
        printf("Book%d: \n", count);
        printf("Title: %s\n", book -> title);
        printf("Author: %s\n", book -> author);
        book = book -> next;
        count++;
    }
}

void ReleaseLibrary(struct Book **library)
{
    struct Book *temp;

    while (library != NULL)
    {
        temp = *library;
        *library = (*library) -> next;
        free(temp);
    }
}

int main()
{
    struct Book *library = NULL; // head

    int ch;
    while (1)
    {
        printf("Do you need register the information of books(Y/N)?");
        do
        {
            ch = getchar();
        } while (ch != 'Y' && ch != 'N');

        if (ch == 'Y')
        {
            AddBook(&library);
            //struct Book **library = NULL;
            //AddBook(library);
            // We definite 'library' as a double pointer in the funtion, but in the main funciton single pointer. So we need pass the parameter with '&' to degrade it.
        }
        else
        {
            break;
        }
    }

    printf("Do you need print the information of books(Y/N)?");
    do
    {
        ch = getchar();
    } while (ch != 'Y' && ch != 'N');
    
    if (ch == 'Y')
    {
        PrintLibrary(library);
    }

    ReleaseLibrary(&library);

    pause();
    return 0;
}