#include<stdio.h>
int main(){
	int sizeOfArray, i;
	
	printf("Enter the size of array : \n");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the element %d of array : ", i);
		scanf("%d", &array[i]);
	}
	
	printf("The array is : \n");
	for(i=0;i<sizeOfArray;i++){
		printf("%d \n", array[i]);
	}
	
	int prefixMax[sizeOfArray];
	prefixMax[0] = array[0];
	for(i=1;i<sizeOfArray;i++){
		if(array[i]  > prefixMax[i-1]){
			prefixMax[i] = array[i];
		}
		else{
			prefixMax[i] =  prefixMax[i-1];
		}
	}
	
	printf("The array is : \n");
	for(i=0;i<sizeOfArray;i++){
		printf("%d \n", prefixMax[i]);
	}

	
	int idx;
	printf( "Find the max element till index: \n");
	scanf("%d", &idx);
	
	printf("output : %d", prefixMax[idx]);
	

}
