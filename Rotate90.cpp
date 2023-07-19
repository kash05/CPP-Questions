#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define nline "\n"
#define pb push_back
#define ppb pop_back

void print (int arr[][100],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }cout << nline;
    }
}

void reverse(int arr[][100],int row,int col){

for(int i=0;i<row*col;i++){

int low=0,high=row-1;

while(low<high){
    swap(arr[i][low],arr[i][high]);
        low++;high--;
}
}

}

void transpose (int matrix[][100],int row,int col){
    for(int i=0;i<row;i++)
      {
          for(int j=i;j<col;j++)
          {
              int temp = matrix[i][j];
              matrix[i][j] = matrix[j][i];
              matrix[j][i] = temp;
          }
      }
}

void rotate90(int matrix[][100],int nRow,int nCol){
   transpose(matrix,nRow,nCol);
   reverse(matrix,nRow,nCol);
   print(matrix,nRow,nCol);

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

 rotate90(arr,row,col);

    return 0;
}