#include <bits/stdc++.h>
using namespace std;

int findPeak(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){

    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
    
    else{
        end=mid;
    }
    mid=start+(end-start)/2;

    }

    return arr[start];

}

int main(){
      
     
    int  arr[]={1,2,3,3,5,3,2,1};

    int peak=findPeak(arr,8);
    
    cout << peak;

    return 0;
}