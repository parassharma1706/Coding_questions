/************Best Time To Buy And Sell The Stock*******************/
#include<bits/stdc++.h>
using namespace std;
int best_time(int *arr,int n){
	int mini=INT_MAX;
	int max_profit=0;
	for(int i=0;i<n;i++){
		mini=min(mini,arr[i]);
		max_profit=max(max_profit,arr[i]-mini);
	}
	return max_profit;
}
int main(){
	int arr[]{7,1,5,3,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<best_time(arr,n);
	
	/* Time complexity=O(n);*/
	
	return 0;
}
