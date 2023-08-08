#include <bits/stdc++.h> 
#include<vector>
void reverseArray(vector<int> &arr , int position){
    int i = position + 1;
    int j = arr.size()-1;
    int temp;

    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}