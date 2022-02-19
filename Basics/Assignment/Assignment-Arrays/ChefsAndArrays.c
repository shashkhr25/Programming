#include<stdio.h>
int main(){
	int i,T;
	printf("Enter no of test cases: ");
	scanf("%d", &T);
	
	for(i=0;i<=T;i++){
		int N,j;
		printf("Enter no of elements in arrays for test case %d : ", i);
		scanf("%d",&N);
		int array1[N], array2[N];
		
		
		for(j=0;j<N;j++){
			printf("Enter the %d element for array 1 : " , j);
			scanf("%d",&array1[j]);			
		}
		
		for(j=0;j<N;j++){
			printf("Enter the %d element for array 2 : " , j);
			scanf("%d", &array2[j]);			
		}
		
		for(j=0;j<N;j++){
			if(array1[j]>array2[j]){
				printf("%d%d ", array1[j],array2[j]);
			}
			else{
				printf("%d%d ", array2[j],array1[j]);
			}
		}

	}

	return 0;
}
