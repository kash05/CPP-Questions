#include <bits/stdc++.h>
using namespace std;
#include "tree.h"

Tnode<int>* inputTree(){

    int rootData;//root value
    cin >> rootData;
    Tnode<int>*  root = new Tnode<int>(rootData);

    int n;//no of childrens
    cin >> n;

    for(int i=0;i<n;i++){
       Tnode<int>* child = inputTree();//new tree for every new root
       root->children.push_back(child);//connect Real root and obtained root
    }
    return root;
}

void print(Tnode<int>* root){

    if(root==NULL){
        return ;
    }

    cout << root -> data << ":";
    for(int i=0;i<root->children.size();i++){
        cout << root->children[i]->data << ","; 
    }cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
    
} 

int main(){

    // Tnode<int>*  root = new Tnode<int>(1);
    // Tnode<int>* node1 = new Tnode<int>(2);
    // Tnode<int>* node2 = new Tnode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    Tnode<int>* root = inputTree();
    print(root);

    return 0;
}