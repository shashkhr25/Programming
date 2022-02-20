#include<stdio.h>
#include<stdbool.h>

//Marked for revision
bool canBeChunked ( int i, int j, int array[]);
int main(){
	int sizeOfArray,i;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d elememt of array : ", i);
		scanf("%d", &array[i]);
	}
	
	i=0;
	int j,answer =0;
	while(i<sizeOfArray){
		for(j=i;i<sizeOfArray;j++){
			if(canBeChunked(i,j, array)){
				break;
			}
			answer++;
		}
		i=j+1;
	}
	printf("The maximum chunks are : ");
	return 0;
}


bool canBeChunked ( int i, int j, int array[]){
	int count = 0, k;
	for(k=i; i<=j;k++){
		if( array[k]  >= i && array[k] <=j){
			count++;
		}	
	}
	
	if(count == (j-i+1)){
		return false;
	}
	else{
		return true;
	}
}
