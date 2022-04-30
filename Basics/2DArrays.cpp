#include<iostream>
using namespace std;
int main(){
	
	int array[4][3];
	
	//Scanning the Data in a 2D array;
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cout<<"Enter the "<<j<< " element for row "<<i<<endl; 
			cin>>array[i][j];
		}
	}
	
	cout<<"------------------"<<endl;
	
	//Printing out the elements of 2d array
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cout<<array[i][j]<<" "; 
		}
		cout<<endl;
	}


	
	return 0;
}
