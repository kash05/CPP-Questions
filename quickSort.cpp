#include<iostream>
using namespace std;

int partition(int input[] , int start_Index , int end_Index)
{
    int element = start_Index;
    int count_lessThanElement = 0;
    for (int i =start_Index+1 ; i<=end_Index ; i++)
    {
        if(input[i] <= input[element])
        {
            count_lessThanElement++;
        }
    }
    int pos_element = start_Index+count_lessThanElement;
    int temp = input[start_Index];
    input[start_Index] = input[pos_element];
    input[pos_element] = temp;
    while (start_Index<=pos_element && end_Index>=pos_element)
    {
          if(input[start_Index]<=input[pos_element])
        {
            start_Index++;
        }
        else if(input[end_Index]>input[pos_element])
        {
            end_Index--;
        }
        else
        {
            temp=input[start_Index];
            input[start_Index]=input[end_Index];
            input[end_Index]=temp;
            start_Index++;
            end_Index--;
        }   
    }  
    return pos_element; 
}
void quickSortHelper(int input[],int start_Index,int end_Index){
    if(start_Index>end_Index){
        return;
    }
    int element_Index=partition(input,start_Index,end_Index);
    quickSortHelper(input,start_Index,element_Index-1);
      quickSortHelper(input,element_Index+1,end_Index);
}


void quickSort(int input[], int size){
    quickSortHelper(input,0,size-1);
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


