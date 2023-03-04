/********* Remove duplicate from sorted array and return the size of unique elements **************/
#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int *arr,int n){
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[j]!=arr[i]){
			i++;
			arr[i]=arr[j];
		}
	}
	
	return i+1;
}
int main(){
	int arr[]={1,1,1,2,2,2,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<remove_duplicate(arr,n);
	return 0;
}
