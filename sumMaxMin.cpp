#include <bits/stdc++.h> 

int sumOfMaxMin(int arr[], int length){
    int minVal = arr[0];
    int maxVal = arr[0];

    for (size_t i = 1; i < length; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        } else if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return minVal + maxVal;
}