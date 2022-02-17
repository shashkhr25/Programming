#include<stdio.h>
int main(){
	int sizeOfArray, i;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	int array[sizeOfArray];
	
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element of array : ", i);
		scanf("%d", &array[i]);
	}
	
	printf("Printing the elements in reverse order \n");
	
	for(i=sizeOfArray-1; i>=0;i--){
		printf("Element %d is %d \n",i, array[i]);
	}
return 0;
}
