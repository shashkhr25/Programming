#include <stdio.h>

int main(void) {
    int T,N,i,;
    printf("Enter the no of test cases : ");
	scanf("%d",&T);
	
	for(i=1;i<=T;i++){
		int studentSuccessful = 0;
		printf("Enter the no of students for %d test case :",i);
		scanf("%d",&N);
	

	    int students[N], timeToFinish[N], timeNeeded[N];
	    int j;
	    for(j=0;j<N;j++){
	        printf("Enter the time before %d student should complete : ", j );
			scanf("%d", &timeToFinish[j]);
			
			printf("Enter the time needed for %d student to complete cooking : ", j );
			scanf("%d", &timeNeeded[j]);

	    } 
	   for(j=N-1;j>=1;j--){
	       timeToFinish[j]=timeToFinish[j]-timeToFinish[j-1];
	   }
	   
	   for(j=0;j<N;j++){
	   		if(timeNeeded[j] <= timeToFinish[j]){
	   			studentSuccessful++;
			}
	   }

		printf("The number of students who can finish in time is : %d \n", studentSuccessful);	
	}
	return 0;
}
