#include<stdio.h>
int main(){
	
	//maximise the expression. P*array[i] + Q * array[j] + R* array[k]  where i<j<k.
	int sizeOfArray,i;
	printf("Enter the size of array : ");
	scanf("%d", &sizeOfArray);
	
	int array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		printf("Enter the %d elememt of array : ", i);
		scanf("%d", &array[i]);
	}
	
	int answer = 0 , p,q,r,j,k;
	printf("Enter p :");
	scanf("%d", &p);
	
	printf("Enter q :");
	scanf("%d", &q;

	printf("Enter r :");
	scanf("%d", &r);
	
	
	//Using brute force approach.
	for(i=0;i<sizeOfArray;i++){
		for(j=i+1;j<sizeOfArray;j++){
			for(k=j+1;k<sizeOfArray;k++){
				 int exppression;
				 expression = p*array[i] + q*array[j] + r*array[k];
				 
				 if(expression > answer){
				 	answer = expression;
				 } 
			}
		}
	}
	printf("Output bu brute Force : \n", answer);

	
	//Using PreMax and SuffMax .


	
	return 0;
}
