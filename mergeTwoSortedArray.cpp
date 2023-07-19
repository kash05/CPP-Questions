#include<iostream>
#include<vector>
using namespace std;

int mergeARR(int a[],int len1,int b[],int len2,int c[]){
int i=0;
int j=0;
int k=0;
while(i<len1 && j<len2){
if(a[i] < b[j]){
c[k++]=a[i++];
}
else{
    c[k++]=b[j++];
}
}
while (i<len1)
{
    c[k++]=a[i++];
}

while (j<len2)          
{
    c[k++]=b[j++];
}

}
 void printARR(int ans[],int n) { 
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
 
}



int main(){
int a[]={1,3,5};
int b[]={2,4,6};
int c[6]={0};

mergeARR(a,3,b,3,c);
printARR(c,6);

return 0;
}