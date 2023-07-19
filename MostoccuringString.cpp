#include <bits/stdc++.h>
using namespace std;

char getmost(string s){

	int arr[26]={0};
	int index=-1;
	for(int i=0;i<s.size(); i++){
		char ch=s[i];
		if(ch>='a' && ch<='z'){
			index=ch-'a';
		}
		
		arr[index]++;
	}
    int maxi=-1;
	int ans=-1;
	for(int i=0;i<26;i++){
		if(maxi<arr[i]){
			ans=i;
			maxi=arr[i];
		}
	}

	char occV='a'+ans;
	  return occV;
}

int main(){

string s;
cin >> s;

getmost(s);

cout << getmost(s) << endl;

	return 0;
}