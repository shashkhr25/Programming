##include <stdio.h>
int main(void) {
	long noOfPeople;
	scanf("%ld \n", &noOfPeople);
	printf("%ld", noOfPeople * (noOfPeople -1)/2);
    return 0;
    
    //Make sure to handle to constraihts / integer overflow / By converting to long.
}
