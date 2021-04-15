#include "function.h"

void addBook()
{
    int chooseCatg;
    printf("ADD NEW BOOKS");
    printf("\n\n\t\t\tENTER YOUR DETAILS BELOW:");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\tBook ID NO  = ");
    scanf("%u",&book[count].books_id);
    printf("\n\t\t\tEnter book name = ");
	scanf("%s", book[count].bookName);
	printf("\n\t\t\tEnter author name = ");
	scanf("%s", book[count].authorName);
	printf("\n\t\t\tEnter catagory = ");
	printf("\n\t\t\t1.History\n\t\t\t2.Arts_Music\n\t\t\t3.Biograhies\n\t\t\t4.Bussiness\n\t\t\t5.Comics\n\t\t\t6.Computer_Tech\n\t\t\t");
	scanf("%d",&chooseCatg);
	switch(chooseCatg){
		case 1:strcpy(book[count].catagory,"History");
		break;
		case 2:strcpy(book[count].catagory,"Arts_Music");
		break;
		case 3:strcpy(book[count].catagory,"Biograhies");
		break;
		case 4:strcpy(book[count].catagory,"Bussiness");
		break;
		case 5:strcpy(book[count].catagory,"Comics");
		break;
		case 6:strcpy(book[count].catagory,"Computer_Tech");
		break;
		default:strcpy(book[count].catagory,"Others");
	}
	//scanf("%s", book[count].catagory);
	//strcpy(book[count].catagory,"History");
	printf("\n\t\t\tEnter pages = ");
	scanf("%d", &book[count].pages);
    printf("\n\t\t\tEnter price = ");
	scanf("%f", &book[count].price);
	count++;
	//printf("%d",count);
}

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

void updateBook(){
	int bookid,chooseCatg,flag=0;;
	printf("\n\n\t\t\tENTER BOOK ID :");
	scanf("%d",&bookid);
    printf("\n\t\t\t----------------------------------------------\n");
	
	for(int i=0;i<count;i++){
		if(book[i].books_id==bookid){
			flag=1;
			printf("\n\t\t\tBOOK ID%d",book[i].books_id);
			printf(" AVAILABLE....");
			printf("\n\t\t\tEnter new name:");
			scanf("%s", book[i].bookName);
			printf("\n\t\t\tEnter new author:");
			scanf("%s", book[i].authorName);
			printf("\n\t\t\tEnter new catagory = ");
	        printf("\n\t\t\t1.History\n\t\t\t2.Arts_Music\n\t\t\t3.Biograhies\n\t\t\t4.Bussiness\n\t\t\t5.Comics\n\t\t\t6.Computer_Tech\n\t\t\t");
	        scanf("%d",&chooseCatg);
			switch(chooseCatg){
				case 1:strcpy(book[i].catagory,"History");
		        break;
		        case 2:strcpy(book[i].catagory,"Arts_Music");
		        break;
		        case 3:strcpy(book[i].catagory,"Biograhies");
		        break;
		        case 4:strcpy(book[i].catagory,"Bussiness");
		        break;
		        case 5:strcpy(book[i].catagory,"Comics");
		        break;
		        case 6:strcpy(book[i].catagory,"Computer_Tech");
		        break;
		        default:strcpy(book[i].catagory,"Others");
				}
			printf("\n\t\t\tEnter new no pages = ");
	        scanf("%d", &book[i].pages);
            printf("\n\t\t\tEnter new price = ");
	        scanf("%f", &book[i].price);
		}
	}
	if(flag==0)
		printf("\n\t\t\tBOOK NOT AVAILABLE");
}

int noOfBooksByCatagory(char cat_ty[]){
	int catagoryBookCount=0;
	for (int i = 0; i < count; i++) {

				if (strcmp(cat_ty,
						book[i].catagory)
					== 0)
					catagoryBookCount++;
			} 
			return catagoryBookCount;
}
