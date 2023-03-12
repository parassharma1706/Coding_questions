/****** Find the Number that appear once and other number twice in array *******/
#include<bits/stdc++.h>
using namespace std;
int missing_number(int *arr,int n){
int ans=0;
for(int i=0;i<n;i++){
	ans^=arr[i];
}
	return ans;
}
int main(){
	int arr[]={2,3,4,2,4,3,5,6,5,1,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<missing_number(arr,n);
	/*
	Time complexity=O(n)
	Space complexity=O(1)
	*/
	return 0;
}
