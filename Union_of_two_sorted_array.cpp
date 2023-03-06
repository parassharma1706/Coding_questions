/******************** Union Of Two sorted array ********************/
/* The union of two sorted array can be defined as an array of consisting of the common  
and the distinct elements of the two arrays.The final array should be sorted in ascending
 order. */ 
#include<bits/stdc++.h>
using namespace std;
vector<int> sorted_array(vector<int> &a,vector<int> &b){
	int n=a.size(),m=b.size();
	int i=0,j=0;
	vector<int> uni;
	
	while(i<n && j<m){
        if(a[i]==b[j]){
            uni.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            uni.push_back(b[j]);
            j++;
        }
        else{
            uni.push_back(a[i]);
            i++;
        }
        while(i<n && a[i-1]==a[i] && i!=0) i++;
        while(j<m && b[j-1]==b[j] && j!=0) j++;
    }
    
    while(i<n){
        uni.push_back(a[i]);
        i++;
        while(i<n && a[i-1]==a[i] && i!=0) i++;
        
    }
    while(j<m){
        uni.push_back(b[j]);
        j++;
        while(j<m && b[j-1]==b[j] && j!=0) j++;
    
    }
    
return uni;
}
int main(){
	vector<int> a={3,3,4,5,6,7,8,9,9,9};
	vector<int> b={2,4,10,10};
	
	vector<int> union_array=sorted_array(a,b);
	
	for(auto it:union_array){
	cout<<it<<" ";
}
	return 0;
}
