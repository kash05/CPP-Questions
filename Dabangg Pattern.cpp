#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i=1;


while(i<=n){

    //first square

    int j=1;
    int x=n-i+1;
    while(j<=x){
        cout << j;
        j++;
    }
    int space1=i-1;
    while(space1){
        cout << "*";
        space1--;
    }
    

    //second square

int space=i-1;
while(space){
    cout << "*";
    space--;
}



    int z=n-i+1;
    while(z>=1){
        cout << z;
        z--;
    }cout << endl;
    i++;

}
    
return 0;

}       