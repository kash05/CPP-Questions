#include<iostream>
using namespace std;

void merge(int arr[],int s,int mid,int e){
int i=s;
int j=mid+1;
int k=s;
int c[50];

while(i<=mid && j<=e){
    if(arr[i]<arr[j]){
        c[k]=arr[i];
        k++;
        i++;
    }else{
        c[k]=arr[j];
        k++;
        j++;
    }
}
while(i<=mid){
    c[k]=arr[i];
    k++;
    i++;
}
while(k<=e){
    c[k]=arr[j];
    k++;
    j++;
}
 for (i = s; i < k; i++)  {
        arr[i] = c[i];
    }
}


void mergeSORT(int arr[],int s,int e){
int mid;
if(s<e){
    mid=(s+e)/2;
mergeSORT(arr,s,mid);
mergeSORT(arr,mid+1,e);
merge(arr,s,mid,e);


}
}



int main(){
int arr[30],num;
cin>>num;
for(int i=0;i<num;i++){
    cin>>arr[i];
}
mergeSORT(arr,0,num-1);
for(int i=0;i<num;i++){
    cout<<arr[i]<<endl;
}

return 0;
}