#include <stdio.h>
#include <unistd.h>

struct Book
{
    char title[128];
    char author[40];
    float price;
    unsigned int date;
    char publisher[40];
} book;

int main()
{
    //struct Book book;
    printf("Please enter the title of the book: ");
    scanf("%s", book.title);
    printf("Please enter the author's name: ");
    scanf("%s", book.author);
    printf("Please enter the price of the book: ");
    scanf("%f", &book.price);
    printf("Please enter the publication date of the book: ");
    scanf("%d", &book.date);
    printf("Please enter the publisher of the book: ");
    scanf("%s", book.publisher);

    // initilization
    //struct Book book = {"a", "b", 1.00, 1, "c"};
    //struct Book book = {.price = 1.00};
    //struct Book book = {.publisher = "a", .price = 1.00, .date = 1};

    printf("Data registered!\n");

    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Publication date: %u\n", book.date);
    printf("Publisher: %s\n", book.publisher);

    pause();
    return 0;
}