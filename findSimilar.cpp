#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
    int counter = 0; 

    for(int i=0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(arr2[i]==arr1[j]){
                counter++;
            }
        }
    }
    
    int elements = n+m-counter;

    return make_pair(counter, elements);
	
}