#include "function.h"


void searchBooks(){
	char bk_nm[30];
	int flag=0;
	printf("\n\t\t\tENTER BOOK NAME : ");
			scanf("%s", bk_nm);
			for (int i = 0; i < count; i++) {

				if (strcmp(bk_nm,book[i].bookName)== 0){
					flag=1;
					printf("\n\t\t\tAVAILABLE....");
					printf("\n\t\t\tBook Name:%s",book[i].bookName);
					printf("\n\t\t\tAuthor Name:%s",book[i].authorName);
					}
			}
			if(flag==0)
				printf("\n\t\t\tBOOK NOT AVAILABLE");
}

