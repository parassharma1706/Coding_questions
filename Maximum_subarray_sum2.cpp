/* Given an integer array arr,find the contiguous subarray(containing atleast one 
number) which has the largest sum and returns its sum and prints the subarray.*/
#include<bits/stdc++.h>
using namespace std;
int maximum_subarray_sum(int *arr,int n,vector<int> &sub){

	int max_sum=INT_MIN;
	for(int i=0;i<n;i++){
	   int current_sum=0;
		for(int j=i;j<n;j++){
			current_sum+=arr[j];
			if(current_sum>max_sum){
				max_sum=current_sum;
				sub.clear();
				sub.push_back(i);
				sub.push_back(j);
			}
		}
	}
	return max_sum;
}
int main(){
	int arr[]={-2,-3,4,-1,-2,1,5,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> subarray;
	cout<<maximum_subarray_sum(arr,n,subarray)<<endl;
	for(int i=subarray[0];i<=subarray[1];i++){
		cout<<arr[i]<<" ";
	}
	/*
	Time Complexity=O(n^2)
	Space Complexity=O(1)
	*/
	
	return 0;
}
