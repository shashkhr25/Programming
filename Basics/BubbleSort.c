#include<stdio.h>
int main(){
	int sizeOfArray,i,j;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element :", i);
		scanf("%d", &array[i]);
	}

	for(i=0;i<sizeOfArray;i++){
		printf("The %d element before sorting : %d \n", i, array[i]);
	}


	for(j=0;j<sizeOfArray-1;j++){
		for(i=0;i<sizeOfArray-1;i++){
		if(array[i] > array[i+1]){
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	}
	}	
	printf("-----------------------------");
	for(i=0;i<sizeOfArray;i++){
		printf("The %d element after sorting : %d \n", i, array[i]);
	}


	return 0;
}
