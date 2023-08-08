#include <bits/stdc++.h> 

void rearrange(vector<int> &arr)
{
    int n = arr.size();
    int i = 0, j=n-1;
    int temp = 0;
    while(i<j){
        while(i<=n-1 && arr[i]>=0){
            i++;
        } 
        while(j>=0 && arr[j]<0){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    if(i==0 || i==n){
        return;
    }
    int k = 0;
    while(k<n && i<n){
        swap(arr[k], arr[i]);
        i=i+1;
        k=k+2;
    }
}