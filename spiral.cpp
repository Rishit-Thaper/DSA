#include <bits/stdc++.h> 
#include<vector> 

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> spiral;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;

        int startingRow = 0;
        int startingCol = 0;
        int endingCol = col-1;
        int endingRow = row-1;

        int index = 0;
        while(count<total){

            //print first row
            for(index = startingCol; count<total && index<=endingCol; index++){
                spiral.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //print last column

            for(index = startingRow; count<total && index<=endingRow; index++){
                spiral.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //print last row
            for(index = endingCol; count<total && index>=startingCol; index--){
                spiral.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //print first column
            for(index = endingRow; count<total && index>=startingRow; index--){
                spiral.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return spiral;
    }
};