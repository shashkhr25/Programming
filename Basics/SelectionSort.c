#include<stdio.h>
#include<limits.h>
int main(){
	int sizeOfArray,i,j;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element :", i);
		scanf("%d", &array[i]);
	}

	printf("--------------------\n");
	for(i=0;i<sizeOfArray;i++){
		printf("The %d element is %d \n",i, array[i]);
	}
	
	for(i=0;i<sizeOfArray;i++){
		
		int min=INT_MAX, idx;
		
		for(j=i;j<sizeOfArray;j++){
			if(array[j] < min){
				idx= j;
				min=array[j];
			}
		}
		
		int temp;
		temp = array[i];
		array[i] = array[idx];
		array[idx] = temp;
	}
	
	printf("--------------------\n");
	for(i=0;i<sizeOfArray;i++){
		printf("The %d element is %d \n",i, array[i]);
	}

	return 0;
}
