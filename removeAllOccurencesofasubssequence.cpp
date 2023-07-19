#include <bits/stdc++.h>
using namespace std;

string removeSub(string s,string part){
	for(s.length()!=0;s.find(part)<s.length();){
			s.erase(s.find(part),part.length());
   }
	return s;
}

int main(){

string s,part;
cin >> s >> part;

cout << removeSub(s,part);

	return 0;
}