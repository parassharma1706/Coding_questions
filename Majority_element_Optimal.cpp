/*************** Majority Element **************/
/***************** Moore's Voting Algorithm *****************/
/* Find the majority element in the array.A majority element in an array A 
of size N is an element that appears more than floor(N/2) times in the array. */
#include<bits/stdc++.h>
using namespace std;
int majority_element(int *arr,int n){
	int count=0;
	int ele=-1;
	for(int i=0;i<n;i++){
		if(count==0){
			ele=arr[i];
		}
		if(ele==arr[i])
		count++;
		else
		count--;
	}
	
	return ele;
}
int main(){
	int arr[]={1,2,3,4,2,4,4,4,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<majority_element(arr,n);
	/*
	Time complexity=O(n)
	Space complexity=O(1)
	*/

return 0;
}
