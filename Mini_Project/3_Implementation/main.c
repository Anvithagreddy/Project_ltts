
#include "function.h"

//------------------------------------------------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------------------------------------------------------------
void init() {
	int pin, flag=0, noOfAttempts=3;
	printf("\n\nWELCOME TO LIBRARY SYSYTEM\n\n\n\n"); 
	while(flag==0 & noOfAttempts!=0){
		printf("PIN:");
		scanf("%d",&pin);
		
		if(pin == 3412)
		{
			printf("\n-----  SUCCESSFUL  -----\n\n");
			flag=1;
		}
		else{
			noOfAttempts--;
			if(noOfAttempts == 0){
				flag = 1;
				printf("SORRY,TRY AGAIN LATER..");
				exit(0);
			}
			printf("TRY AGAIN...");
		}
		printf("\n");
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------

void menu()
{
    int choice = 0,catBookCnt,catchoice;
	char cat_ty[30];
    do
    {
        printf("\n\n\n\n-------  MAIN MENU  --------");
        printf("\n1.Add Books");
        printf("\n2.Search Books");
        printf("\n3.View Books");
        printf("\n4.Update Book");
		printf("\n5.Catagory Book Count");
        printf("\n0.Exit");
        printf("\n\n\nEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            searchBooks();
            break;
        case 3:
            viewBooks();
            break;
        case 4:
            updateBook();
            break;
        case 5:
		    printf("\n\n\t\t\tSELECT CATAGORY :");
            printf("\n\t\t\t------------------------------------------------\n");
		    printf("\n\t\t\t1.History\n\t\t\t2.Arts_Music\n\t\t\t3.Biograhies\n\t\t\t4.Bussiness\n\t\t\t5.Comics\n\t\t\t6.Computer_Tech\n\t\t\t7.Others");
			printf("\n\t\t\tYOUR CHOICE:");
			scanf("%d",&catchoice);
			switch(catchoice){
				case 1:strcpy(cat_ty,"History");
				break;
				case 2:strcpy(cat_ty,"Arts_Music");
				break;
				case 3:strcpy(cat_ty,"Biograhies");
				break;
				case 4:strcpy(cat_ty,"Bussiness");
				break;
				case 5:strcpy(cat_ty,"Comics");
				break;
				case 6:strcpy(cat_ty,"Computer_Tech");
				break;
				case 7:strcpy(cat_ty,"Others");
				break;
				default:printf("Invalid choice");
			}
			//scanf("%s",cat_ty);
            catBookCnt=noOfBooksByCatagory(cat_ty);
			printf("NUMBER OF BOOKS: %d",catBookCnt);
            break;
        case 0:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...");
        }                                            
    }
    while(choice!=0);                                        
}

//------------------------------------------------------------------------------------------------------------------------------------------------------

int main() {
	init();
	menu();	
	return 0;
}