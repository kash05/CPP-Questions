#include <bits/stdc++.h>
using namespace std;
int main(){

    stack<int> s;
    s.push(10);
    s.push(9);
    s.push(8);
    s.pop();
        cout << s.empty() << endl;
        cout << s.size() << endl;
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }

    return 0;
}   