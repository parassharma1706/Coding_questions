/****** Find the Number that appear once and other number twice in array *******/
/*** We can use array for hashing but for that we have to find out the maximum number 
in our array and also if there are negative numbers it is difficult to hash them in 
an array so we use map.***/
#include<bits/stdc++.h>
using namespace std;
int missing_number(int *arr,int n){
map<long long,int> mpp;
for(int i=0;i<n;i++){
	mpp[arr[i]]++;
}
for(auto it:mpp){
	if(it.second==1)
	return it.first;
}
	return -1;
}
int main(){
	int arr[]={2,3,4,2,4,3,5,6,5,1,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<missing_number(arr,n);
	/*
	Time complexity=O(nlogm+(n/2)+1) //where m is the element in the map
	Space complexity=O((n/2)+1)
	*/
	return 0;
}
