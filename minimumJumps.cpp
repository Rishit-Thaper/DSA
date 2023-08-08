#include<bits/stdc++.h>
//Greedy Approach
int minimumJumps(vector<int> &arr, int n)
{
    int jump = 0;
    int pos = 0;

    int des = 0;

    for(int i = 0; i<n-1; i++){

        des = max(des, i+arr[i]);
        
        if(pos == i){
            pos = des;
            jump++;
        }
    }
    if(pos>=n-1) return jump;
    return -1;
}