#include<stdio.h>
int main(){
	int sizeOfArray,i ,deletionIndex;
	printf("Enter the size of the array : ");
	scanf("%d",&sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element : ", i);
		scanf("%d", &array[i]);
	}
	
	for(i=0;i<sizeOfArray;i++){
		printf("The %d element before deletion is %d \n", i, array[i]);
	}
	
	printf("\nEnter an index to be deleted : ");
	scanf("%d", &deletionIndex);
	
	for(i=deletionIndex;i<sizeOfArray-1;i++){
		array[i]=array[i+1];
	}
	printf("\n");
	
	for(i=0;i<sizeOfArray;i++){
		printf("The %d element after deletion is %d \n", i, array[i]);
	}
	
	return 0;
}
