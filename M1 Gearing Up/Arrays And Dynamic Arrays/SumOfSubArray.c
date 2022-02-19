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
	
	
	//Brute Force Approach | Has a lot of time complexity.
	int q,l,m;
	printf("Enter the number of queries: ");
	scanf("%d", &q);
	
	/*for(i=1;i<=q;i++){
		printf("Running flow for query %d \n", i);
		printf("Enter the starting index of sub array : ");
		scanf("%d",  &l);
		
		printf("Enter the ending index of subarray : ");
		scanf("%d", &m);
		
		int j , sum=0;
		for(j=l;j<=m;j++){
			printf("%d \n", array[j]);
			sum += array[j]; 
		}
		
		printf("The sum of subarray for query %d is : %d", i, sum);
	}*/
	
	// Using preprocessing.
	
		//Doing proprocessing.
		for(i=0;i<sizeOfArray;i++){
			printf("The %d element before preprocessing looks like this :  %d \n", i, array[i]);
		}
	
		for(i=1;i<sizeOfArray;i++){
			array[i] += array[i-1];
		}
		
		
		for(i=0;i<sizeOfArray;i++){
			printf("The %d element after preprocessing looks like this : %d \n", i, array[i]);
		}
	
	for(i=1;i<=q;i++){
		printf("Running flow for query %d \n", i);
		printf("Enter the starting index of sub array : ");
		scanf("%d",  &l);
		
		printf("Enter the ending index of subarray : ");
		scanf("%d", &m);
		
		int sum = array[m]- array[l-1];
		printf("The sum of subarray for query %d is : %d", i, sum);
		
	}
	return 0;
}
