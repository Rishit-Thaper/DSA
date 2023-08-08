#include<bits/stdc++.h>

int findDuplicate(vector<int>& arr) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i]; //XORing
    }
    for (int i = 1; i <= arr.size() - 1; i++) {

        ans = ans ^ i;

    }
    return ans;

}