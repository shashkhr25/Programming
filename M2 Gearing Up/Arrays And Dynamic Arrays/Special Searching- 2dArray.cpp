#include<iostream>
using namespace std;
int main(){
	
	//Each row and column of the array is sorted.
	int array[4][4], key;
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Enter the  "<< j<<" element of row "<<i<<endl;
			cin>>array[i][j];
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<array[i][j]<< " ";
		}
		cout<<endl;
	}
	
	cout<<"-------------------------"<<endl;
	
	cout<<"Enter the element to be searched: ";
	cin>>key;
	
	//not the most optimal approach
	/*for(int i=0;i<4;i++){
		if(array[i][0] <= key && array[i][3] => key){
			for(int j=0;j<4;j++){
				if(array[i][j] == key){
					cout<<"The element exists at index :"<<i<<","<<j<<endl;
				}
					else{
						cout<<"Element could not be found"<<endl;
				}
			}
		}
	}*/

	//Optimal approach
	
	
	return 0;
}
