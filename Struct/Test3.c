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
} book = {"a", "b", 1.00, {1, 1, 1}, "c"};

int main()
{
    
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Publication date: %d-%d-%d\n", book.date.year, book.date.month, book.date.day);
    printf("Publisher: %s\n", book.publisher);

    pause();
    return 0;
}