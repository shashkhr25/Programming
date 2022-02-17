#include<stdio.h>
int main(){
	int sizeOfArray,i ;
	printf("Enter the size of the array : ");
	scanf("%d",&sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element : ", i);
		scanf("%d", &array[i]);
	}
	
	for(i=0;i<sizeOfArray;i++){
		int j,frequencyOfElement=0,x= array[i];
		for(j=0;j<sizeOfArray;j++){
				if(array[j] == x){
					frequencyOfElement++;
			}
		}
		printf("The frequency of %d is %d \n", x,frequencyOfElement);		
	}
	
}
