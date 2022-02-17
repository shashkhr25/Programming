#include<stdio.h>
int main(){
	int sizeOfArray,i ,frequencyOfElement=0, x;
	printf("Enter the size of the array : ");
	scanf("%d",&sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d element : ", i);
		scanf("%d", &array[i]);
	}
	
	printf("Enter the element to find frequency : ");
	scanf("%d",&x);
	
	for(i=0;i<sizeOfArray;i++){
		if(array[i] == x){
			frequencyOfElement++;
		}
	}
	
	printf("The frequency of %d is %d", x,frequencyOfElement);
}
