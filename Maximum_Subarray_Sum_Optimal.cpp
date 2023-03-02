/*************** Maximum Subarray Sum ******************/
/*************** Kadane's Algorithm **************/
/* We carry a sub-array sum as long as it gives us positive sum */
#include<bits/stdc++.h>
using namespace std;
int max_sum(int *arr,int n){
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		maxi=max(maxi,sum);
		if(sum<0) sum=0;
	}
	return maxi;
}

int main(){
	int arr[]={-2,-3,4,-1,-2,1,5,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<max_sum(arr,n);
	
	/*
	Time complexity=O(n)
	space complexity=O(1)
	*/
	return 0;
}
