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
	
	
	int amount=0,j,k;
	
	for(i=1;i<sizeOfArray-1;i++){
		int pmax=0, smax=0, difference;
		for(j=0;j<i;j++){
			if(array[j] > pmax){
				pmax = array[j];
			}
		}
		
		for(k=i+1; k<sizeOfArray ;k++){
			if(array[k] > smax){
				smax = array[k];
			}
		}
		
		if(smax > pmax && smax > array[i] && pmax > array[i]){
			difference = (pmax) - array[i];
		}
		else if(smax < pmax && smax > array[i] && pmax > array[i]){
			difference = (smax) - array[i];
		}
		
		printf("the amount of water that can be filled in %d tower is : %d", i, difference);
		amount += difference;
		
	}
	
	
	printf("The amount of total water is : %d", amount);
	
	return 0;
}
