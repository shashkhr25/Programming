#include<stdio.h>
int main(){

	int noOfTestCases,i,j ;
	printf("Enter no of test cases: ");
	scanf("%d", &noOfTestCases);
	
	
	for(i=1;i<=noOfTestCases;i++){
		int M, x, y, noOfSafeHouses = 0 , noOfUnsafeHouses= 0;
		printf("Enter no of houses where cops live: ");
		scanf("%d", &M);
		
		int copsHouses[M];
		for(j=0;j<M;j++){
			printf("Enter the index where %d cop lives : ", j);
			scanf("%d", &copsHouses[j]);
		}
		printf("Enter the number of houses the cops can cover : ");
		scanf("%d", &x);
			
		printf("Enter the number of minutes the cops will keep on searching: ");
		scanf("%d", &y);
		
		int houses[100];
			
		int k = x*y;
		for(j=0;j<M;j++){
			int first, last;
			first = (copsHouses[j] - k);
			last = (copsHouses[j] + k);
			
			if(first<0){
				first = 0;
			}
			if(last > 99){
				last = 99;
			}
			
			printf("The cop living in house %d will cover from %d to %d \n", copsHouses[j], first, last);
			
			int l;
			for(l=first;l<=last;l++){
				houses[l] = 1;
			}
		}
		
		for(j=0;j<100;j++){
			printf("the index %d of houses are: %d \n", j, houses[j]);
			if(houses[j] == 1){
				noOfSafeHouses+=1;
			}
			else{
				noOfUnsafeHouses+=1;
			}
		}
		
		printf("No of safe for test cases %d houses are : %d \n",  i, noOfUnsafeHouses);
	}
		return 0;	
}
	


