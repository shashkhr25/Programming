#include<stdio.h>
int main(){
	int sizeOfArray;
	printf("Enter the size of array:");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	int i,l =0 ,j = sizeOfArray-1;
	
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element : ", i);
		scanf("%d", &array[i]);
	}

	for(i=0;i<sizeOfArray;i++){
		printf("Element : %d ", array[i]);
	}
	printf("\n");
	
	while(l<=j){
		int temp = array[l];
		array[l]=array[j];
		array[j]= temp;
		l++;
		j--;	
	}		
	
	for(i=0;i<sizeOfArray;i++){
		printf("Element : %d ", array[i]);
	}

	return 0;
}
