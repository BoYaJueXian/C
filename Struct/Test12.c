#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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

void AddBook(struct Book **library) // **library -> *book -> book
{
    struct Book *book;
    static struct Book *tail; // This program only works when 'library' is empty.
    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("RAM allocation failed!\n");
        exit(1);
    }
    GetInput(book);

    if (*library != NULL)
    {
        tail -> next = book;
        book -> next = NULL;
    }
    else
    {
        *library = book;
        book -> next = NULL;
    }
    tail = book;
}

struct Book *SearchBook(struct Book *library, char *target)
{
    struct Book *book;
    book = library;
    while (book != NULL)
    {
        if (!strcmp(book -> title, target) || !strcmp(book -> author, target))
        {
            break;
        }
        book = book -> next;
    }
    return book;
}

void PrintBook(struct Book *book)
{
    printf("Title: %s\n", book -> title);
    printf("Author: %s\n", book -> author);
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

    while (*library != NULL)
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
    char input[128];
    struct Book *book;
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

    printf("You can search a book with title or author: ");
    scanf("%s", input);
    book = SearchBook(library, input);
    if (book == NULL)
    {
        printf("Sorry, we can't find it.\n");
    }
    else
    {
        do
        {
            printf("We have found the book you searched: \n");
            PrintBook(book);
        } while ((book = SearchBook(book -> next, input)) != NULL);
        
    }

    ReleaseLibrary(&library);

    pause();
    return 0;
}