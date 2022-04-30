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
	
	int k;
	cout<<"Enter the element for freq threshold: ";
	cin>>k;
	
	int countOfLegalElements=0;
	for(int i=0;i<sizeOfArray;i++){
		if(array[i] <= k){
			countOfLegalElements++;
		}
	}

	cout<<countOfLegalElements<<endl;
	
	int countLegalWindow=0, count =0;
	for(int i=0;i<countOfLegalElements;i++){
		if(array[i] <= k){
			countLegalWindow ++;
		}
		if(countLegalWindow > count){
			count = countLegalWindow;
		}	
	}
		

	for(int j=countOfLegalElements;j<sizeOfArray;j++){
		if(array[j] <= k){
			countLegalWindow++;
		}
		if(array[j-countOfLegalElements] <= k){
			countLegalWindow--;
		}
		if(countLegalWindow > count){
			count = countLegalWindow;
		}
	}
	
	cout<<"Min swaps are : "<<countOfLegalElements-count<<endl;
	
}
