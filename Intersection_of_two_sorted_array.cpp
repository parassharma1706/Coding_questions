/*************** Intersection Of Two Sorted Arrays *****************/
/******* Intersection of two arrays is an array that consists of all the commom elements 
occurring in both arrays. ***********/
#include<bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
vector<int> intersection;
int i=0,j=0;
while(i<n && j<m){
	if(a[i]==b[j]){
		intersection.push_back(a[i]);
		i++;
		j++;
	}
    else if(a[i]>b[j]){
		j++;
	}
	else {
		i++;
	}
}
return intersection;
}
int main(){
	vector<int> a={1,2,3,3,4,4,5};
	vector<int> b={2,3,4,4,5,6,7};
	int n=a.size(),m=b.size();
	
	vector<int> inter=findArrayIntersection(a,n,b,m);
	for(auto itr:inter){
		cout<<itr<<" ";
	}
	
	
	return 0;
}
