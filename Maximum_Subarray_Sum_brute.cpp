/*************** Maximum Subarray Sum ******************/
#include<bits/stdc++.h>
using namespace std;
int max_sum(int *arr,int n){
	int sum=0;
	int maxi=INT_MIN;
	
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				for(int k=i;k<=j;k++)
				sum+=arr[k];
			
			maxi=max(sum,maxi);
			sum=0;
	       }
		}
	return maxi;
}

int main(){
	int arr[]={-2,-3,4,-1,-2,1,5,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<max_sum(arr,n);
	
	/*
	Time complexity=O(n^3)
	space complexity=O(1)
	*/
	return 0;
}
