#include<stdio.h>
int main(){
	int sizeOfArray,i;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d elememt of array : ", i);
		scanf("%d", &array[i]);
	}

	for(i=0;i<sizeOfArray;i++){
		printf("the %d element is  before rotation : %d \n", i,array[i]);
	}
	
	int k,j;
	printf("Enter the no of rotation : ");
	scanf("%d", &k);
	
	if(k>sizeOfArray){
		k = k % sizeOfArray;
	}
	
	/*if(k>sizeOfArray){
		k = k % sizeOfArray;
	}
	
	//Rotating
	for(j=1;j<=k;j++){
		int temp;
		temp = array[sizeOfArray-1];
		for(i=sizeOfArray-2;i>=0-1;i--){
			array[i+1] = array[i];
		}
		array[0] = temp;
	}	
	
	for(i=0;i<sizeOfArray;i++){
		printf("the %d element is after rotation : %d \n", i,array[i]);
	}*/
	
	
	//Using optimised approach.
	int f=0,l=sizeOfArray-1;
	while(l>=f){
		int temp;
		temp = array[f];
		array[f] = array[l];
		array[l] = temp;
		f++;
		l--;
	}
	
	f=0,l=k-1;
	while(l>=f){
		int temp;
		temp = array[f];
		array[f] = array[l];
		array[l] = temp;
		f++;
		l--;
	}
	
	
	f=k,l=sizeOfArray-1;
	while(l>=f){
		int temp;
		temp = array[f];
		array[f] = array[l];
		array[l] = temp;
		f++;
		l--;
	}

	for(i=0;i<sizeOfArray;i++){
		printf("the %d element is after rotation : %d \n", i,array[i]);
	}
	
	return 0;
}
