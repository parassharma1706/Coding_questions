/********************** Better Approach*************************/
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>> arr={{1,1,1},{1,0,1},{1,1,1}};
	// TWO DUMMY VECTORS
	vector<int> row(3,-1);//row dummy
	vector<int> col(3,-1);//column dummy
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]==0){
				row[i]=0;
				col[j]=0;
			}
		}
	}
	//Updating 2D array
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(row[i]==0||col[j]==0){
				arr[i][j]=0;
			}
		}
	}
	//Printing the 2D array after updation
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	/* Output
	1 0 1
	0 0 0
	1 0 1
	*/
	
	return 0;
}
