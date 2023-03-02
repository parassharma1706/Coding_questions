/********* Count Inversion In an Array ***********/
/**********Using Merge Sort*****************/
#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int mid,int r,int& count){
	int n1=mid+1-l;
	int n2=r-mid;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++){
		a[i]=arr[i+l];
		}
		for(int i=0;i<n2;i++){
			b[i]=arr[mid+1+i];
		}
		int i=0;
		int j=0;
		int k=l;
		while(i<n1 && j<n2){
			if(a[i]<=b[j])
			arr[k++]=a[i++];
			else{
			arr[k++]=b[j++];
		      count+=n1-i;
		}
	}
		while(i<n1){
			arr[k++]=a[i++];
		}
		while(j<n2){
			arr[k++]=b[j++];
		}
	
	return ;
}

void merge_sort(int *arr,int l,int r,int &count){
	if(l>=r) return;
	int mid=(l+r)/2;
	
	merge_sort(arr,l,mid,count);
	merge_sort(arr,mid+1,r,count);
	
	merge(arr,l,mid,r,count);
	return ;
}
int main(){
	int arr[]={8,4,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int count=0;
	merge_sort(arr,0,n-1,count);
	
	cout<<count;
	return 0;
}
