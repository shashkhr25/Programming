#include<stdio.h>
int main(){
	int sizeOfArray, fixedSum,i,j;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	printf("Enter the fixed sum : ");
	scanf("%d", &fixedSum);
	
	int array[sizeOfArray];
	
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element of array:", i+1);
		scanf("%d", &array[i]);
	}
	
	for(i=0;i<sizeOfArray;i++){
		for(j=i+1;j<sizeOfArray;j++){
			int sumOfPairs;
			sumOfPairs = array[i] + array[j];
			if(sumOfPairs == fixedSum){
				printf("The pair is : %d %d \n", array[i], array[j]);
			}
		}
	}
	return 0;
}
