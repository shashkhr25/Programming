#include<iostream>
using namespace std;

int main(){
	
	int sizeOfArray;
	cout<<"Please enter the size of array\n";
	cin>>sizeOfArray;

	int i,array[sizeOfArray];
	for(i=0;i<sizeOfArray;i++){
		cout<<"Enter the "<<i<<" Elenent :";
		cin>>array[i];
	}
	
	int k;
	cout<<"Enter the size of sub array : ";
	cin>>k;
	
	int sumSubArray=0;
	for(i=0;i<k;i++){
		sumSubArray+=array[i];
	}
	
	int j;
	for(j=k;j<sizeOfArray;j++){
		cout<<"Sum of previous window is :"<<sumSubArray<<endl;
		sumSubArray+=array[j];
		sumSubArray-=array[j-k];
	}
	cout<<"Sum of sub array is : "<<sumSubArray;
	return 0;
}
