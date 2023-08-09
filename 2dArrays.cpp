#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; i++)
        {
            if(arr[i][j]==target){
                return 1;
            }  
        }
    }
    return 0;
}
void printSum(int arr[][4], int row, int col){
    for (int i = 0; i<row; i++){
        int sum = 0;
        for(int j =0; j<col; j++){
            sum +=arr[i][j];
        }
        cout<<"The sum of "<<i<<"th row is"<<sum<<endl;
    }
}
int largestRowSum(int arr[][4], int row, int col){
    int max=INT_MIN;
    int num = -1;
    for (int i = 0; i<row; i++){
        int sum = 0;
        for(int j =0; j<col; j++){
            sum +=arr[i][j];
        }
        if(sum>max){
            max= sum;
            num = i;
        }
    }
    cout<<"The max sum of "<<num<<"th row is max "<<max<<endl;

    return num;
}
void printColSum(int arr[][4], int row, int col){
    for (int j = 0; j<col; j++){
        int sum = 0;
        for(int i =0; i<row; i++){
            sum +=arr[i][j];
        }
        cout<<"The sum of "<<j<<"th column is"<<sum<<endl;

    }
}
int main(){

    int arr[3][3];
    //hard code

    int arr1[3][4] = {1, 2 , 3, 4,5 ,6 ,7 ,8 ,9 ,10 ,11,12};
    

    //row wise input
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr1[i][j];
    //     }
    // }
    //column wise input

    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr1[j][i];
    //     }
    // }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    //searching an element to search 

    // int target;
    // cin>>target;

    // if(isPresent(arr1, target, 3,4)){
    //     cout<<"present";
    // }
    printSum(arr1, 3,4);
    printColSum(arr1, 3,4);
    largestRowSum(arr1, 3,4);

    return 0;
}
