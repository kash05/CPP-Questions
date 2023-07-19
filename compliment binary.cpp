#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int m=n;
int mask=0;

if(n==0){
    cout << 1;
}

while(m!=0){
    mask = (mask << 1) | 1;
    m = m >> 1;
}
int result = ~n & mask;

cout << result;

return 0;
}