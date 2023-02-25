/*************Largest Sub-array With 0 Sum*****************/
#include<bits/stdc++.h>
using namespace std;
int Largest_subarray(int *arr,int n){
	unordered_map<int,int> mpp;
	int sum=0;
	int max=-1;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum==0){
			max=i+1;
		}
	    else{
	    	if(mpp.find(sum)!=mpp.end()){
	    		max=i-mpp[sum];
			}
			else{
				mpp[sum]=i;
			}
		}
	}
	return max;
}
int main(){
	int arr[]={1,-1,3,2,-2,-8,7,1,10,23};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<Largest_subarray(arr,n);
	/* output:5*/
	return 0;
}
