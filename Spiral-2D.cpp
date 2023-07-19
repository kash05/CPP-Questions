#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define nline "\n"
#define pb push_back
#define ppb pop_back


void spiral(int arr[][100],int nrow,int ncol){
   
    int top=0;
    int bottom=nrow-1;
    int left = 0;
    int right = ncol-1;
    int point=1; // direction of traversing
    
    while(top<=bottom && left<=right){
    
    if(point == 1){

        //first row traversed
        for(int i=top;i<=right;++i){
            cout << arr[top][i] <<" ";
        }
        ++top; // need not to be traversed again 
        point = 2;
    }
    else if(point == 2){

        // last column traversed
        for (int i=top;i<=bottom;++i){
            cout << arr[i][right] << " ";
        }
        --right; // need not to be traversed again
        point = 3;
    }
    else if(point == 3){

        //last row traversed
        for (int i=right;i>=left;--i){
            cout << arr[bottom][i] << " ";
        }
        --bottom; // need not to be traversed again 
        point = 4;
    }
    else if(point == 4){

        //second row traversed 
        for(int i=bottom;i>=top;--i){
            cout << arr[i][left] << " " ;
        }
        ++left; // need not to be traversed again
        point = 1;
    }
  }  
}

int main(){

int row,col;
cin >> row >> col;
int arr[100][100];

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin >> arr[i][j];
    }
}

spiral(arr,row,col);

    return 0;
}