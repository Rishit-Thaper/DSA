#include <bits/stdc++.h>
#include<vector> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> wave;
    for (int col =0; col<mCols; col++){

        if(col&1){

            //when column is odd=>Bottom_up

            for(int row = nRows-1; row>=0; row--){
                wave.push_back(arr[row][col]);
            }

        }
        else{
            //when column is even=>top_down

            for(int row = 0; row<nRows; row++){
                wave.push_back(arr[row][col]);
            }

        }
    }
    return wave;
}