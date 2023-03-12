/********* Majority Element *******/
/* Find the majority element in the array.A majority element in an array A 
of size N is an element that appears more than N/2 times in the array. */
#include<bits/stdc++.h>
using namespace std;
int majority_element(int *arr,int n){
map<int,int> mpp;
for(int i=0;i<n;i++){
	mpp[arr[i]]++;
}
for(auto it:mpp){
	if(it.second>n/2)
	return it.first;
}

return -1;
}
int main(){
	int arr[]={2,4,5,4,3,4,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<majority_element(arr,n);
	/*
	Time complexity=O(nlogm)+O((n/2)+1)
	Space complexity=O((n/2)+1)
	*/
	return 0;
}
