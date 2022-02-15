#include<stdio.h>
int main(){
	//BODMAS ==> precedence rule.
	//Operator precedence.
	//(*, /, %) > (+,-) 
	
	//if we have operators of equal precedence , how to evaluate ? ==> assosiativity rule. Left -> Right , Right -> Left
	//++a have more priority than ++a and then other operators will be evaluated.
	int x = 5+9%4*3-2+6/4;
	printf("%d \n", x);\
	x+=1;
	printf("%d \n", x);\
	return 0;
}
