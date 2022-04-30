#include<iostream>
using namespace std;

int main(){
	int sizeOfArray;
	cout<<"Enter size of Array: ";
	cin>>sizeOfArray;
	
	int array[sizeOfArray];
	for(int i=0;i<sizeOfArray;i++){
		cout<<"Enter the "<<i<<" element of array: ";
		cin>>array[i];
	}
	
	int k,j,l;
	
	cout<<"Enter the size of sub array :";
	cin>>k;
	
	cout<<"Enter the element whose frequency is to be found : ";
	cin>>l;
	
	int freq=0;
	for(int i=0;i<k;i++){
		if(array[i] == l){
			freq++;
		}
	}
	
	for(j=k;j<sizeOfArray;j++){
		if(array[j]==l){
			freq++;
		}
		if(array[j-k]==l){
			freq--;
		}
		
		cout<<"The freq of "<<l<<" is : "<<freq<<endl;
	}
}
