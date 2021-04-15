/**
 * @file function.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOK_NAME   50
#define MAX_AUTHOR_NAME 50
#define MAX_CATAGORY_NAME 50
/**
 * @brief 
 * 
 */
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
/**
 * @brief 
 * 
 * @param pin 
 * @return int 
 */
int init(int pin);

/**
 * @brief 
 * 
 * @return int 
 */
int addBook();
/**
 * @brief 
 * 
 */
void searchBooks();
/**
 * @brief 
 * 
 */
void viewBooks();
/**
 * @brief 
 * 
 */
void updateBook();
/**
 * @brief 
 * 
 * @param cat_ty 
 * @param count 
 * @return int 
 */
int noOfBooksByCatagory(char cat_ty[],int count);
#endif