#include<stdio.h>
int main(){
	//inserting an element in an already sorted array.
	int sizeOfArray,i,j;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element of the currently sorted array :", i);
		scanf("%d", &array[i]);
	}
	
	
	printf("---------------------\n");
	for(i=0;i<sizeOfArray;i++){
		printf("The %d element before sorting is : %d \n", i,array[i] );
	}
	
	
	for(i=1;i<sizeOfArray;i++){
		j=i;
		while(j>0 && array[j] < array[j-1]){
			int temp ;
			temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
			j--;
			
		}
	}
	
	printf("---------------------\n");
	for(i=0;i<sizeOfArray;i++){
		printf("The %d element before sorting is : %d \n", i,array[i] );
	}
	
	
	return 0;
}
