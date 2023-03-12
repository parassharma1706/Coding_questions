/************************ Missing Number *******************/
/* You are given n and n-1 numbers in the form of array from range [1,n],find the missing number from 
this range*/
#include<bits/stdc++.h>
using namespace std;
int missing_number(int *arr,int n){
	for(int i=1;i<=n;i++){
		int flag=0;
		for(int j=0;j<n-1;j++){
			if(arr[j]==i){
				flag=1;
				break;
			}
		}
		if(flag==0)
		return i;
	}
	return -1;
}
int main(){
	int arr[]={1,6,5,4,2};
	int n=6;
	cout<<missing_number(arr,n);
	/*
	Time complexity=O(n^2)
	Space complexity=O(1)
	*/
	return 0;
}
