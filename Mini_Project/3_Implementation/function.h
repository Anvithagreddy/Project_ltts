#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOK_NAME   50
#define MAX_AUTHOR_NAME 50
#define MAX_CATAGORY_NAME 50

struct booksInfo
{
    unsigned int books_id; 
    char bookName[MAX_BOOK_NAME];
    char authorName[MAX_AUTHOR_NAME];
    char catagory[MAX_CATAGORY_NAME];
    int pages;
	float price;
};

struct booksInfo book[10];
static int count=0;

void init();
int addBook();
void searchBooks();
void viewBooks();
void updateBook();
int noOfBooksByCatagory(char cat_ty[],int count);
#endif