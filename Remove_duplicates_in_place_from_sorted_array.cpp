/******* Remove duplicates in place from sorted array *********/
#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int *arr,int n){
	set<int> s;
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	int index=0;
	for(auto itr:s){
		arr[index]=itr;
		index++;
	}
	return index;
}
int main(){
	int arr[]={1,1,2,2,2,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<remove_duplicate(arr,n);
	/* 
	Time complexity:O(NlogN+N)
	space complexity:O(N)
	*/
	return 0;
}
