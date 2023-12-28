#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 1000
#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 100
#define MAX_PHONE_LENGTH 20

struct Book {
    char title[MAX_NAME_LENGTH];
    char author[MAX_NAME_LENGTH];
    int edition;
    char condition[MAX_NAME_LENGTH];
    char isbn[MAX_NAME_LENGTH];
    char comments[MAX_EMAIL_LENGTH];
};

struct Donor {
    char name[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char phone[MAX_PHONE_LENGTH];
    struct Book books_donated[MAX_RECORDS];
    int num_books_donated;
};

int main() {
    struct Donor donor1;
    strcpy(donor1.name, "John Doe");
    strcpy(donor1.email, "johndoe@example.com");
    strcpy(donor1.phone, "+1 (123) 456-7890");

    struct Book book1;
    strcpy(book1.title, "The Catcher in the Rye");
    strcpy(book1.author, "J.D. Salinger");
    book1.edition = 1;
    strcpy(book1.condition, "Good");
    strcpy(book1.isbn, "0316769177");
    strcpy(book1.comments, "This is a great book!");

    donor1.books_donated[0] = book1;
    donor1.num_books_donated = 1;

    printf("Donor Name: %s\n", donor1.name);
    printf("Donor Email: %s\n", donor1.email);
    printf("Donor Phone: %s\n", donor1.phone);
    printf("Books Donated:\n");
    for (int i = 0; i < donor1.num_books_donated; i++) {
        printf("Title: %s\n", donor1.books_donated[i].title);
        printf("Author: %s\n", donor1.books_donated[i].author);
        printf("Edition: %d\n", donor1.books_donated[i].edition);
        printf("Condition: %s\n", donor1.books_donated[i].condition);
        printf("ISBN: %s\n", donor1.books_donated[i].isbn);
        printf("Comments: %s\n", donor1.books_donated[i].comments);
    }

    return 0;
}
