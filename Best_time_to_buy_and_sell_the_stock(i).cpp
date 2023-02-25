/************Best Time To Buy And Sell The Stock*******************/
#include<bits/stdc++.h>
using namespace std;
int best_time(int *arr,int n){
	int profit=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(arr[j]>arr[i])
				profit=max(profit,arr[j]-arr[i]);
		
	return profit;
}
int main(){
	int arr[]={7,1,5,3,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<best_time(arr,n);
	/* output:5
	Time complexity=O(n^2)
	*/
	return 0;
}
