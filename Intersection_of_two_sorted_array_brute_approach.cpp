/************ Intersection of two sorted array ***************/
/**************** Brute force approach ******************/
#include<bits/stdc++.h>
using namespace std;
vector<int> intersection_array(vector<int> &arr1,vector<int> &arr2){
	int n1=arr1.size();
	int n2=arr2.size();
	vector<int> vec(n2,0);
	vector<int> intersection;
	for(int i=0;i<n1;i++){
	    for(int j=0;j<n2;j++){
	    	if(arr1[i]==arr2[j] && vec[j]==0){
	    		intersection.push_back(arr1[i]);
	    		vec[j]=1;
	            break;
			}
			else if(arr1[i]<arr2[j]){
			  break;	
			}
				
		}
	}
	/*
	 Time Complexity:O(n1*n2)
	Space Complexity:O(n2)
	*/
	return intersection;
}
int main(){
	vector<int> arr1={1,1,2,3,4,5};
	vector<int> arr2={2,3,3,4,5,5,6};
	
	vector<int> intersection=intersection_array(arr1,arr2);
	
	for(int ele:intersection){
		cout<<ele<<" ";
	}
	
	return 0;
}
