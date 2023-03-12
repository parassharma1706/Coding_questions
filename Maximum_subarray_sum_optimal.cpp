/* Given an integer array arr,find the contiguous subarray(containing atleast one 
number) which has the largest sum and returns its sum and prints the subarray.*/
#include<bits/stdc++.h>
using namespace std;
int maximum_subarray_sum(int *arr,int n,vector<int> &sub){
	int sum=0;
	int s=0;
	int end=-1;
	int max_sum=INT_MIN;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum>max_sum){
			max_sum=sum;
			end=i;
			sub.clear();
			sub.push_back(s);
			sub.push_back(end);
		}
		if(sum<0){
			sum=0;
			s=i+1;
		}
	}
	return max_sum;
}
int main(){

int arr[]={-2,-3,4,-1,-2,5,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> subarray;
	cout<<maximum_subarray_sum(arr,n,subarray)<<endl;
	for(int i=subarray[0];i<=subarray[1];i++){
		cout<<arr[i]<<" ";
}
/*
Kadane's Algorithm
Time Complexity=O(n)
Space Complexity=O(1)
*/
return 0;
}
