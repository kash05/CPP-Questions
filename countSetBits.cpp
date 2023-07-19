#include<iostream>
using namespace std;

int countSetBits(int n){
  
int store=0;
int count=0;

while(n!=0){
  int digit = n%2;
   store=(store*10)+digit;
  n=n/2;
}

while(store!=0){
int digit = store%10;
if(digit & 1){
  count ++;
  store=store/10;
  
}else{
  store=store/10;
}

}
return count;

}

int main(){
int a,b;
cin >> a >> b;

int a_bits=countSetBits(a);
int b_bits=countSetBits(b);

cout << a_bits+b_bits;


return 0;
}