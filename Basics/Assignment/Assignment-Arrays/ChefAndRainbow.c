#include<stdio.h>
#include<stdbool.h>
int main(){
	int T,i;
	bool isRainbowArray =false;
	printf("Enter no of test cases: ");
	scanf("%d", &T);
	
	for(i=1;i<=T;i++){
		int n,j;
		printf("Enter the size of array for test case %d :", i);
		scanf("%d", &n);
		
		int array[n];
		for(j=0;j<n;j++){
			printf("Enter the element for index %d : ", j);
			scanf("%d", &array[j]);
		}
		
		while(true){
			int k;
			for(j=0;j<n;j++){
				if(array[j] == 1){
					for(k=1;k<7;k++){
						if(array[j+k] == k+1){
							isRainbowArray = true;
						}
					}
				}
			}
			
			break;
		}
		
		printf("%d", isRainbowArray);
		
	}
	return 0;
}
