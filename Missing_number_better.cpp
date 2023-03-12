/************************ Missing Number *******************/
/* You are given n and n-1 numbers in the form of array from range [1,n],find the missing number from 
this range*/
#include<bits/stdc++.h>
using namespace std;
int missing_number(int *arr,int n){
	vector<int> freq(n+1,0);
	for(int i=0;i<n-1;i++){
		freq[arr[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(freq[i]==0)
		return i;
	}
	return -1;
}
int main(){
	int arr[]={1,6,5,4,2};
	int n=6;
	cout<<missing_number(arr,n);
	/*
	Time complexity=O(2*n)
	Space complexity=O(n)
	*/
	return 0;
}
