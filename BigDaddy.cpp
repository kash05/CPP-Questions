#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[1000];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

int BigDaddy=arr[0];
int counter=0;

for(int i=0;i<n;i++){

    if(arr[i]==arr[i+1]){
       BigDaddy=arr[i+1];
    }else{
        counter++;
    }  
}

cout << BigDaddy;

return 0;
}