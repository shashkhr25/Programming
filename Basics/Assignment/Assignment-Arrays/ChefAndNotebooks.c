#include<stdio.h>
int main(){
	int T,i;
	printf("Enter the no of test cases:");
	scanf("%d", &T);
	
	for(i=0;i<T;i++){
		int x,y,k,n;
		printf("Emter chef's requirement for poetry pages:");
		scanf("%d", &x);
		
		printf("Enter pages left in chef's notebook : ");
		scanf("%d",&y);
		
		printf("Emter chef's budget : ");
		scanf("%d",&k);
		
		printf("Enter the no of notebooks the shopkeeper has:");
		scanf("%d",&n);
		
		int j;
		for(j=1;j<=n;j++){
			int notebook[2];
			printf("Enter the no of pages in %d notebook: ", j);
			scanf("%d", &notebook[0]);
			
			printf("Enter the price of %d noteboook:", j);
			scanf("%d", &notebook[1]);
			
			if(notebook[1] <= k){
				if(notebook[0] >= x-y){
					printf("Lucky Chef");
				}
			}
			else{
					printf("Unlucky Chef");
			}
		}
		
	}
	return 0;
}
