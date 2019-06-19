#include <stdio.h>
#include <unistd.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
};

struct Book GetInput(struct Book book)
{
    printf("Please enter the title of the book: ");
    scanf("%s", book.title);
    printf("Please enter the author's name: ");
    scanf("%s", book.author);
    printf("Please enter the price of the book: ");
    scanf("%f", &book.price);
    printf("Please enter the publication date of the book: ");
    scanf("%d%d%d", &book.date.year, &book.date.month, &book.date.day);
    printf("Please enter the publisher of the book: ");
    scanf("%s", book.publisher);

    return book;
}

void PrintBook(struct Book book)
{
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Publication date: %d-%d-%d\n", book.date.year, book.date.month, book.date.day);
    printf("Publisher: %s\n", book.publisher);
}

int main()
{
    struct Book book1, book2;

    printf("Please enter the information of book1.\n");
    book1 = GetInput(book1);

    putchar('\n');
    printf("Please enter the information of book2.\n");
    book2 = GetInput(book2);

    printf("\nInformation registered! Here is validation!\n");

    printf("The information of book1: \n");
    PrintBook(book1);
    putchar('n');
    PrintBook(book2);
    
    pause();
    return 0;
}