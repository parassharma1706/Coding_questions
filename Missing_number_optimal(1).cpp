/************************ Missing Number *******************/
/* You are given n and n-1 numbers in the form of array from range [1,n],find the missing number from 
this range*/
#include<bits/stdc++.h>
using namespace std;
int missing_number(int *arr,int n){
	int sum=n*(n+1)/2;
	int sum1=0;
	for(int i=0;i<n-1;i++){
		sum1+=arr[i];
	}
	
	return sum-sum1;
}
int main(){
	int arr[]={1,6,5,4,2};
	int n=6;
	cout<<missing_number(arr,n);
	/*
	Time complexity=O(n)
	Space complexity=O(1)
	*/
	return 0;
}
