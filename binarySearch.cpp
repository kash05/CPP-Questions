#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
       
       while(start <= end){


    if(arr[mid] == x){
       return mid;
    } 

    if(x < arr[mid]){
        end = mid-1;
    }   else{
        start = mid + 1;
    }
    mid=(start+end)/2;
 }
    return -1;
}

int main(){

int arr[]={1,12,23,34,45,56};
int x;
cin >> x;

int index=BinarySearch(arr,6,x);

  cout << index;
 
return 0;
}