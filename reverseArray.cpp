#include<iostream>
using namespace std;

void reverseArray(int arr[]){
   int start=0;
   int end=9;

   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }  
}


int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,10};

reverseArray(arr);
 
 for(int i=0;i<10;i++){
    cout << arr[i] << " ";
 }

return 0;
}