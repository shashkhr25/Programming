#include<stdio.h>
#include<stdbool.h>

int main(){
	int T,i,minMoves=0;
	printf("enter the no of test cases : ");
	scanf("%d",&T);
	
	for(i=1;i<=T;i++){
		int n,j, maxSalary=0;
		printf("Enter the no of workers for test case %d : ",i);
		scanf("%d", &n);
		
		int workers[n];
		
		for(j=0;j<n;j++){
			printf("Enter the salary of %d worker : ", j+1);
			scanf("%d",&workers[j]);
		}
		
		
		for(j=0;j<n;j++){
			printf("The salary of %d worker before increment is : %d  \n",j+1, workers[j]);
		}
		while(true){
			bool equal = true;
			//Check if all salaries are equal
			for(j=0;j<n;j++){
				if(workers[j] != workers[0]){
					equal=false;
				}
			}
			
			if(equal){
				printf("Salaries are equal now , we can exit loop. \n");
				break;
			}

			printf("Salaries are not equal\n");
			
			//If not equal , find the maximum salary.
			for(j=0;j<n;j++){
				if(workers[j] >= maxSalary){
					maxSalary=workers[j];
					printf("Maximum salary Updating to : %d \n", maxSalary);
					printf("Current worker salary : %d \n", workers[j]);
				}
			}
			
			printf("Maximum salary is : %d \n", maxSalary);

			
			//Increasing by 1 if salary is not max
			for(j=0;j<n;j++){
				if(workers[j] != maxSalary){
					workers[j] = workers[j]+1;
					minMoves=minMoves+1;
				}
			}
		}
		
		
	for(j=0;j<n;j++){
			printf("The salary of %d worker afte1 increment is : %d  \n",j+1, workers[j]);
		}
		
		
		printf("min moves are  %d \n",  minMoves);

	}
	return 0;
}
