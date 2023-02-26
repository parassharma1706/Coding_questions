/********************** Find Peak Element**************************/
#include<bits/stdc++.h>
using namespace std;
int peak_element(int *arr,int n){
	int lo=0,hi=n-1;
	while(lo<=hi){
	int mid=lo+(hi-lo)/2;
	
	if((mid==0)||arr[mid]>arr[mid-1] && (mid==n-1)||arr[mid]>arr[mid+1]) return mid;
	
	else if(arr[mid]<arr[mid+1]) lo=mid+1;
	
	else hi=mid-1;
	}
	return -1;
}
int main(){
	int arr[]={1,2,1,3,4,6,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<peak_element(arr,n);
	return 0;
}

