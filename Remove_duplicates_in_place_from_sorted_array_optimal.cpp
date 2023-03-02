#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int *arr,int n){
	int k=0;//inserting the elements at the starting
	int i;// finding the unique elements
	for( i=1;i<n;i++){
		if(arr[i]!=arr[k]){
			k++;
			swap(arr[i],arr[k]);
		}
	}
	return k+1;
}
int main(){
	int arr[]={1,1,2,2,2,3,3,3,3,3,4,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);

	
	cout<<remove_duplicate(arr,n);
	/*
	 Time complexity=O(N)
	space complexity=O(1)
	*/
	return 0;
}
