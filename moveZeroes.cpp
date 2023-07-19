#include<iostream>
#include<vector>
using namespace std;


void moveZeroes(vector<int>& v){
    int i=0;
    for(int j=0;j<v.size();j++){
       if(v[j]!=0){
        swap(v[j],v[i]);
        i++;
       }
    }
}


int main(){
vector<int> v;
v.push_back(1);
v.push_back(0);
v.push_back(0);
v.push_back(2);
v.push_back(3);

moveZeroes(v);

for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<endl;
}
return 0;
}
