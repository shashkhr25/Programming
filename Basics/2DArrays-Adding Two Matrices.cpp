#include<iostream>
using namespace std;
int main(){
	
	int array[4][3], array2[4][3], array3[4][3];
	//You can only add two matrices if there dimensions are same.

	//Scanning the Data in a 2D array;
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cout<<"Enter the first array"<<j<< " element for row "<<i<<endl; 
			cin>>array[i][j];
		}
	}
	
	
	//Taking elements of second array
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cout<<"Enter the second array "<<j<< " element for row "<<i<<endl; 
			cin>>array2[i][j];
		}
	}



	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			array3[i][j] = array[i][j] + array2[i][j];
		}
	}


	cout<<"------------------"<<endl;
	
	
	//Printing out the elements of 2d array
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			cout<<array3[i][j]<<" "; 
		}
		cout<<endl;
	}


	
	return 0;
}
