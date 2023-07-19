#include<iostream>
#include<cmath>
using namespace std;

int stringToNumber(char input[]){
 if(input == NULL){
    return 0;
 }
 int n=50;
int a=stringToNumber(input);
int c=0;
for(int i=0;i<n;i++){
    c=input[i];
    c++;
}
return c*pow(10,n-1)+a;

}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
