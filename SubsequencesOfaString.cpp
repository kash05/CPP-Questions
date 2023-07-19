#include <bits/stdc++.h>
using namespace std;

int subsequences(string s,string output[]){
    if(s.empty()){
        output[0]="";
        return 1;
    }
    string smallString=s.substr(1);
      int count = subsequences(smallString,output);
    for(int i=0;i<count;i++){
        output[i+count]=s[0]+output[i];
    }
   
    return count*2;
}

int main(){

string s;
cin >> s;
int len=s.length();
int n=pow(2,len);
string* output=new string[n]; 

int count = subsequences(s,output);

for(int i=0;i<count;i++){
    cout << output[i] << endl;
}

    return 0;
}