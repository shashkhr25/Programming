#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	printf("Sum is %d \n", x+y);
	printf("Difference is %d \n", x-y);
	printf("Product is %d \n", x*y);
	printf("Division is %.2f \n", (float)x/y);

	//	Modulo operator a % b --> Gives the remainder. 
	//	Cannot be applied on decimal values.
	//	Dont apply in negative numbers.
	
	printf("Remainder is : %d \n ", x%y) ;


	// Uniary operators
	//  ++ : increment operator. +1   a++ ==> a = a+1
	// -- : dcrement operator.	-1	  a-- ==> a = a-1
	// a++ reurns the value first and then increment, ++a increments first and return after.
	
	return 0;
}
