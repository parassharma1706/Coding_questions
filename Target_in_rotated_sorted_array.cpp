/* Given a rotated sorted array and a target.Find the index of the 
target in rotated sorted array where all elements are distinct.If not 
found return -1.*/
/******************Using Binary Search***********************/

#include<bits/stdc++.h>
using namespace std;
int find_target(int *arr,int n,int target){
	int start=0,end=n-1;
	
	while(start<=end){
		int mid=start+(end-start)/2;
		
		if(arr[mid]==target) return mid;
		
		else if(arr[start]<=arr[mid]){
			if(target>=arr[start] && target<=arr[mid]) 
			end=mid-1;
			else
			start=mid+1;
		}
		
		else{
			if(target>=arr[mid] && target<=arr[end])
			start=mid+1;
			else
		    end=mid-1;
		}
	}
	return -1;
}
int main(){
	int arr[]={6,7,8,9,10,1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int target=1;
	cout<<find_target(arr,n,target);
	
	return 0;
}
