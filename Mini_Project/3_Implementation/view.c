#include "function.h"


void viewBooks(){
	printf("\n\n\t\t\tLIST OF BOOKS");
	printf("\n\t\t\t----------------------------------\n");
			for (int i = 0; i < count; i++) {

				printf("\n\t\t\tbook ID = %d",
					book[i].books_id);

				printf("\n\t\t\t book name = %s",
					book[i].bookName);
					
				printf("\n\t\t\t author name = %s",
					book[i].authorName);
					
				printf("\n\t\t\t catagory = %s",
					book[i].catagory);

				printf("\n\t\t\t pages = %d",
					book[i].pages);

				printf("\n\t\t\t price = %f",
					book[i].price);
					
				printf("\n\t\t\t");
			}
}