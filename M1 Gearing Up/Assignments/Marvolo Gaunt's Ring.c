#include<stdio.h>
#include<limits.h>

//Works for positive integers.
int main(){
	printf("Enter n,p,q,r : \n");
	int n,p,q,r, i,k,j ,answer = INT_MIN;
	scanf("%d %d %d %d", &n, &p,&q,&r);

	int array[n];
	for(i=0;i<n;i++){
		printf("Enter a%d : ", i);
		scanf("%d", &array[i]);
	}
	
	for(i=0; i<n ; i++){
		int pmax = INT_MIN, smax = INT_MIN;
		for(j=0; j<=i;j++){
			if(array[j] > pmax ){
			pmax = array[j];
			printf("the used value if j is : %d\n", j);
			}
		}
		
		for(k=i;k<n;k++){
			if(array[k] > smax){
			smax = array[k];	
			printf("the used value if k is : %d\n", k);		
			printf("the used value if i is : %d\n", i);	
			}
		}
			
		printf("the pmax : %d and smax %d for element %d \n", pmax, smax, array[i]);
		
		int expression = p*pmax + q* array[i] + r*smax;
		
		printf("the expression output for %d expression is  %d: \n", i, expression);

		if(expression > answer){
			answer=expression;
		}
	}
	
	
	printf("The maximum value of expression is : %d", answer);
	
	return 0;
}
