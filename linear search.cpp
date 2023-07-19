#include<iostream>
using namespace std;
int main(){
int n,x;
cin >> n;
int arr[1000];
int count=0;

//input array

for(int v=0;v<n;v++){
    cin >> arr[v];
}

cin >> x;

//searching x

for (int i=0;i<n;i++){
    if(arr[i]==x){
        count++;
    }
}
   if(count >= 1){
    cout << "element found" << endl;
   }else{
    cout << "element not found" << endl;
   }
   

return 0;
}