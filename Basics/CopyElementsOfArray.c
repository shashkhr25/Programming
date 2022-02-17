#include<stdio.h>
int main(){
	int sizeOfArray = 3;
	int array1[] ={0,1,2};
	int array2[sizeOfArray];
	int i;
	
	for(i=0;i<sizeOfArray;i++){
		array2[i]=array1[i];
	}

	for(i=0;i<3;i++){
		printf("array2[%d] : %d \n", i,array2[i]);
	}	
	return 0;
	
}
