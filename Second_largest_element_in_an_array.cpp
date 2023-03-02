/************* Second Largest Element in an array ****************/
#include<bits/stdc++.h>
using namespace std;
// Second largest element
int second_largest(int *arr,int n){
	int largest=arr[0],sec_lar=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			sec_lar=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>sec_lar)
		sec_lar=arr[i];
	}
	return sec_lar;
}
// Second minimum element 
int second_smallest(int* arr,int n){
	int mini=arr[0], sec_mini=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<mini){
			sec_mini=mini;
			mini=arr[i];
		}
		else if(arr[i]>mini && sec_mini>arr[i])
		sec_mini=arr[i];
	}
	return sec_mini;
}
int main(){
	int arr[]={1,5,3,7,6,7,4,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<second_largest(arr,n);
	cout<<endl;
	cout<<second_smallest(arr,n);
	return 0;
}
