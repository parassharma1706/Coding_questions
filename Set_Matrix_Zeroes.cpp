#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[3][3]={{1,1,1},
               {1,0,1},
               {1,1,0}
			   };
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(arr[i][j]==0){
			for(int k=0;k<3;k++){
				if(arr[i][k]!=0)
				arr[i][k]=-1;
			}
			for(int h=0;h<3;h++){
				if(arr[h][j]!=0)
				arr[h][j]=-1;
			}
		}
	}
}	
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(arr[i][j]==-1)
		arr[i][j]=0;
	}
}
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<arr[i][j]<<" ";
	
	}
	cout<<endl;
	}
	return 0;
}
