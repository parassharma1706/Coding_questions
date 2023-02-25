/***Find the index of minimum element in rotated sorted array***/
/******************Using Binary Search***********************/
#include<bits/stdc++.h>
using namespace std;
int rotated_sorted(int *arr,int n){
if(n==1) return 0;
if(arr[0]<arr[n-1]) return 0;

int lo=0,hi=n-1;
int ans=-1;
while(lo<=hi){

	int mid=lo+(hi-lo)/2;
		
		if(arr[mid]>arr[n-1]) lo=mid+1;
		else {
			ans=mid;
			hi=mid-1;
		}
		
	}
	return ans;
}
int main(){
	int arr[]={5,6,7,8,9,10,1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<rotated_sorted(arr,n);
	return 0;
}
