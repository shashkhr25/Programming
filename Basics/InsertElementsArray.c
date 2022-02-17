#include<stdio.h>
int main(){
	int sizeOfArray;
	printf("Enter the size of array:");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	int k,x,index,i;
	
	printf("Enter the k element till which to fill the array : " );
	scanf("%d", &k);


	for(i=0;i<k;i++){
		printf("Enter the %d element : " , i);
		scanf("%d", &array[i]);
	}
	printf("\n");
	
	for(i=0;i<k;i++){
		printf("The %d element : %d \n" ,i, array[i]);
	}
	
	printf("Enter the elements of x: ");
	scanf("%d",&x);
	printf("Enter the index for x : ");
	scanf("%d", &index);
	
	
	for(i=k-1;i>=index;i--){
		array[i+1]=array[i];
	}
	array[index]=x;

	for(i=0;i<sizeOfArray;i++){
		printf("The %d element : %d \n" ,i, array[i]);
	}
	
	
}
