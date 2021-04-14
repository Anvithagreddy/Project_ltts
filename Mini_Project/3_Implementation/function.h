#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOK_NAME   50
#define MAX_AUTHOR_NAME 50
#define MAX_CATAGORY_NAME 50

typedef struct booksInformation
{
    unsigned int books_id; 
    char bookName[MAX_BOOK_NAME];
    char authorName[MAX_AUTHOR_NAME];
    char catagory[MAX_CATAGORY_NAME];
    int pages;
	float price;
}bookInfo;

bookInfo book[10];
static int count=0;

void addBook();
void viewBooks();
void searchBooks();
void updateBook();
int noOfBooksByCatagory(char cat_ty[]);
#endif