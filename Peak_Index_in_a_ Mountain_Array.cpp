/************** Peak index in a mountain array**************************/
#include<bits/stdc++.h>
using namespace std;
int peak_index(int *arr,int n){
	int lo=0,hi=n-1;
	int ans=-1;
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]<arr[mid+1]){
			ans=mid+1;
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
	return ans;
}
int main(){
int arr[]={0,1,2,3,4,6,7,8,5,3,2,1};
int n=sizeof(arr)/sizeof(arr[0]);

cout<<peak_index(arr,n);
return 0;
}
