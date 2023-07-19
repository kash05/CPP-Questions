#include<iostream>
#include<vector>
using namespace std;

vector<int>reverseARR(vector<int> v){
    int s=0,e=v.size()-1;
while(s<e){
    swap(v[s],v[e]);
    s++;
    e--;
}
return v;

}

void print(vector<int> v){
    
for(int i =0;i<v.size();i++){
    cout<<v[i]<<endl;
}
}

int main(){

vector<int> v;
v.push_back(11);
v.push_back(2);
v.push_back(5);
v.push_back(7);
v.push_back(8);
v.push_back(99);

vector<int> ans=reverseARR(v);
print(ans);

return 0;
}