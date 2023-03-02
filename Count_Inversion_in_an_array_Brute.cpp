/******** Count Inversion In An Array********************/
/************* Brute Force Approach **********************/
#include<bits/stdc++.h>
using namespace std;
int Count_inversion(int *arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j] && i<j)
			count++;
		}
	}
	return count;
}
int main(){
	int arr[]={8,4,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<Count_inversion(arr,n);
	
	return 0;
}
