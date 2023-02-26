/********************  Search a 2D Matrix II ***********************************/
#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>& a,int target){
	int n=a.size();//no. of rows
	int m=a[0].size();//no. of columns
	int i=0,j=m-1;
	while(i<n && j>=0){
		if(a[i][j]==target) return true;
		
		else if(a[i][j]>target) j--;
		
		else i++;
	}
	return false;
}
int main(){
	vector<vector<int>> matrix = { {1,4,7,11,15},
	                              {2,5,8,12,19},
                        	    {3,6,9,16,22},
	                             {10,13,14,17,24},
	                            {18,21,23,26,30}}; 
	
	int target = 5;
	
	cout<<search(matrix,target);
	return 0;

}
