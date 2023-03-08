/******************** Union of two sorted array *********************/
/****************** Brute Force Approach*********************/
#include<bits/stdc++.h>
using namespace std;
vector<int> union_array(vector<int> &arr1,vector<int> &arr2){
	int n1=arr1.size();
	int n2=arr2.size();
	set<int> s;
	for(int i=0;i<n1;i++){
		s.insert(arr1[i]);
	}
	for(int i=0;i<n2;i++){
		s.insert(arr2[i]);
	}
	vector<int> uni;
	for(auto itr:s){
		uni.push_back(itr);
	}
	return uni;
	/*
	Time Complexity:O(n1logn)+O(n2logn)+O(n1+n2)
	Space Complexity:O(n1+n2)+O(n1+n2)
	*/
}
int main(){
	vector<int> arr1={1,1,2,3,4,5};
	vector<int> arr2={2,3,4,5,5,6};
	
	vector<int> uni=union_array(arr1,arr2);
	
	for(auto ele:uni){
		cout<<ele<<" ";
	}
	return 0;
}
