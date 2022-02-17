#include<stdio.h>
int main(){
	//collection of data of same data types.
	//Always take care of indexOutOfBounds Exception.
	//Segmentation error is usually related to your computer memory.
	
	int marks[3];
	int marks2[2] = {0,1};
	int i,sum =0;

	for(i=0;i<3;i++){
		scanf("%d", &marks[i]);			
	}
	
	for(i=0;i<3;i++){
		sum+=marks[i];
	}
	printf("Sum of all elemrnts in array is : %d", sum);
	return 0;
}
