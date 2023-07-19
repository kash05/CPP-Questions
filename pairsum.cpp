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

int x;
cin >> x;

vector<vector<int>> output;

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==x){

            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
            output.push_back(temp);
        }
    }
}
 for (int i = 0; i < output.size(); i++) {
        for (int j = 0; j < output[i].size(); j++)
            cout << output[i][j] << " ";
        cout << endl;
    }


return 0;
}