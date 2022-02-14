#include<stdio.h>
#include<limits.h>
int main(){
	int x = 2147483648;
	//Range is from -2147483648 to 2147483647, int can have total 2^32 values.
	int xmin = INT_MIN , xmax = INT_MAX; 
	printf("%d \n", x);
	printf("%d %d \n", xmin, xmax);
}
