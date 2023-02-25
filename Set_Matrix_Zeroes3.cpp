#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[4][4]={{1,1,1,1},
            	{1,0,1,1},
            	{1,1,0,1},
            	{0,0,0,1}
				};
	int col1=1;//0th index of column dummy
//Taking two dummy array implicit first row as a column dummy And first column as a row dummy
	for(int i=0;i<4;i++){
	if(arr[i][0]==0) col1=0;
		for(int j=1;j<4;j++){
				
			if(arr[i][j]==0)
			arr[i][0]=arr[0][j]=0;
		}
	} 
	//updating array with help of dummy array inside it
	for(int i=4-1;i>=0;i--){
		for(int j=4-1;j>=1;j--){
			if(arr[i][0]==0||arr[0][j]==0)
			arr[i][j]=0;
		}
		if(col1==0) arr[i][0]=0; 
	}

	//printing array after updating
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
			}
			cout<<endl;
	}
	/* Output
	0 0 0 1
	0 0 0 0
	0 0 0 0
	0 0 0 0 
	*/
	return 0;
}
