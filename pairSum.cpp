#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	
	int count = -1;

	int i = 0;
	int j = n-1;

	while(i<j){
		if(arr[i]+arr[j]==target){
			count++;
			i++;
			j--;
		}
		if(arr[i]+arr[j]>target) j--;
		if(arr[i]+arr[j]<target) i++;
	}
	if(count!=-1){
		return count+1;
	}
	else return -1;
}