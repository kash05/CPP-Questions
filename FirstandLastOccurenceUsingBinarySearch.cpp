#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[],int n,int key){
   int start = 0,end=n-1,mid=start+(end-start)/2;
    int store = -1;

    while(start<=end){

        if(arr[mid]==key){
            store=mid;
            end=mid-1;
        }

        if(key > arr[mid]){
            start=mid+1;
        }

        if(key < arr[mid]){
            end=mid-1;
        }

        mid=start+((end-start)/2);
         
    }
        return store;
        return -1;
}

int lastOccurence(int arr[],int n,int key){
int start = 0,end=n-1,mid=start+((end-start)/2);
    int store = -1;

    while(start<=end){
        

        if(arr[mid]==key){
            store=mid;
            start = mid + 1;
        }

        if(key > arr[mid]){
            start=mid+1;
        }

        if(key < arr[mid]){
            end=mid-1;
        }

        mid=start+((end-start)/2);
        
    }
         return store;
}

int main(){

int arr[11]={1,4,5,5,5,5,5,5,8,9,9};

int key;
cout << "Enter the element to be searched :" << endl;
cin >> key;

    int FirstOccurence=firstOccurence(arr,11,key);
    int LastOccurence=lastOccurence(arr,11,key);

     cout << "Index of First Occurence is : " << FirstOccurence << endl;;
     cout << "Index of Last Occurence is : " <<LastOccurence;

    return 0;
}