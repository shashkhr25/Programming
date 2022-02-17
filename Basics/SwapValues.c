#include<stdio.h>
int main(){
	//Using temp
	int x = 2, y = 5;
	printf("Before swapping : %d %d \n", x, y);

	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf("After swapping : %d %d \n", x, y);
	
	
	//Without temp
	printf("Before swapping : %d %d \n", x, y);
	 x = x + y;
	 y = x - y;
	 x = x-  y;
	printf("After swapping : %d %d \n", x, y);
	
	
	return 0;
}
