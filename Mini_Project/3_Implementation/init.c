#include "function.h"

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
