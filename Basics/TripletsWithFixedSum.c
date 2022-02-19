#include<stdio.h>
int main(){
	int sizeOfArray, i,j,k sumOfTriplet;
	
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element :", i);
		scanf("%d", &array[i]);
	}
	
	printf("Enter the sum od triplet : ");
	scanf("%d", &sumOfTriplet);
	
	for(i=0;i<sizeofArray;i++){
		for(j=i+1;j<sizeOfArray;j++){
			for(k=j+1;k<sizeOfArray;k++){
				if(array[i] == array[j] ===array[k]){
					printf("The triplet is: %d %d %d \n",array[i], array[j], array[k]);
				}
			}
		}
	}
	
	return 0;
}
