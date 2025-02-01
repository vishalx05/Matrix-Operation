#include<bits/stdc++.h>
using namespace std;
 int small=INT_MIN;
  void markRow(vector<vector<int>> &arr,int i){
      int n = arr[0].size(); // Correct column size

    for(int j=0;j<n;j++){
        if(arr[i][j]!=0){
            arr[i][j]=small;

        }

    }
}
void markCol(vector<vector<int>> &arr,int j){
    int n=arr.size();

    for(int i=0;i<n;i++){
        if(arr[i][j]!=0){
            arr[i][j]=small;

        }

    }
}
 vector<vector<int>>  setMatrixZeroes(vector<vector<int>> &arr) {
        int n=arr.size();
       int m = arr[0].size(); // Number of columns
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                markRow(arr,i);
                markCol(arr,j);

            }
        }
    }

   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==small){
                arr[i][j]=0;


            }
        }
    }
    return arr;


    }
int main(){
vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = setMatrixZeroes(matrix);

    cout << "The Final matrix is: n\n";
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
}