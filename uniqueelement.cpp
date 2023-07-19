#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int arr[100];

for(int i=0;i<n;i++){
    cin >> arr[i];
}
  
    for(int i=0;i<n;i++)
    {
    	bool boi=0;
        for(int m=0;m<n;m++)
        {
            if(arr[i]==arr[m]and i!=m)
            {
                boi=1;
                break;
            }
                
        }
        if(!boi)
            cout << arr[i];
    }
return 0;
}