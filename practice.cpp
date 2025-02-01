#include<bits/stdc++.h>
using namespace std;
void rowWise(vector<vector<int>> mat){
    int n=mat.size();
    int m=mat[0].size();


        for(int j=0;j<n;j++){
             for(int i=0;i<m;i++){
                    cout<<mat[j][i]<<"  ";

        }
        cout<<endl;

    }
}
void RowReverse(vector<vector<int>>&arr){
       int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<n;i++){
        int start=0;
        int end=m-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++,end--;

        }
    }
}
void colReverse(vector<vector<int>>&arr){
    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<m;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(arr[start][i],arr[end][i]);
            start++,end--;

        }
    }

}
void rowsum(vector<vector<int>>arr){
    int n=arr.size();
    int m=arr[0].size();
    int sum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];

        }

    }
    cout<<"Row Sum : "<<sum<<endl;

}
void transpose(vector<vector<int>>&arr){
      int n=arr.size();
    int m=arr[0].size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(arr[i][j],arr[j][i]);

        }
    }
}

void rotateby90Anti(vector<vector<int>>& mat) {
       int n=mat.size();
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               swap(mat[i][j],mat[j][i]);

           }
       }


       for(int i=0;i<n;i++){
           int start=0,end=n-1;
           while(start<end)
           {
               swap(mat[start][i],mat[end][i]);
               start++;
               end--;

           }

       }
    }

        void rotateMatrix180Counterclockwise(vector<vector<int>>& mat) {
        int n=mat.size();
        for(int i=0;i<n;i++){
            int start=0,end=n-1;
            while(start<end){
                swap(mat[i][start],mat[i][end]);
                start++;
                end--;

            }

        }
        for(int i=0;i<n;i++){
            int start=0,end=n-1;
            while(start<end){
                swap(mat[start][i],mat[end][i]);
                start++;
                end--;

            }

        }


    }


    void rotate90clockwise(vector<vector<int> >& mat) {
    int n=mat.size();
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(mat[start][i],mat[end][i]);
            start++;
            end--;

        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);

        }
    }
}



    void rotateByktimes(vector<vector<int> >& mat) {
    int n=mat.size();
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(mat[start][i],mat[end][i]);
            start++;
            end--;

        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);

        }
    }
}
int main(){
    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // RowReverse(vec);
    // colReverse(vec);
    // rowsum(vec);
    int k=9;
    k=k%4;
    while(k){
        rotateByktimes(vec);
        k--;

    }

    // transpose(vec);


    rowWise(vec);


}