#include<iostream>
#include<vector>
using namespace std;
int main(){

int n;
cin >> n;
int arr[100];

for(int i=0;i<n;i++){
    cin >> arr[i];
}

vector<int> ans;

for(int i=0;i<n;i++){
    if(arr[i]==0){
        ans.push_back(arr[i]);
    }
}

for(int i=0;i<n;i++){
    if(arr[i]==1){
        ans.push_back(arr[i]);
    }
}

for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
}
return 0;
}