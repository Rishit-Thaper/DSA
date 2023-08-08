#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int arr [10000];
    int n;
    cin>>n;

    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    int k;
    
    
    cin>>k;

    vector<int> temp;

    for(int i = k; i<n; i++){
        temp.push_back(arr[i]);
    }
    for(int i = 0; i<k; i++){
        temp.push_back(arr[i]);
    }

    for(int i = 0; i<n; i++){
        arr[i] = temp[i];
    }
    
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}