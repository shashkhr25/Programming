#include<stdio.h>
int main(){
	int sizeOfArray,i, maxElement;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element : " , i);
		scanf("%d", &array[i]);
	}
	
	maxElement=array[0];
	for(i=1;i<sizeOfArray;i++){
		if(array[i] > maxElement){
			maxElement=array[i];
		}
	}
	
	printf("Maximum element in array is : %d ", maxElement);
	return 0;	
}
