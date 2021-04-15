#include "function.h"


int noOfBooksByCatagory(char cat_ty[],int count){
	int catagoryBookCount=0;
	for (int i = 0; i < count; i++) {

				if (strcmp(cat_ty,
						book[i].catagory)
					== 0)
					catagoryBookCount++;
			} 
			return catagoryBookCount;
}