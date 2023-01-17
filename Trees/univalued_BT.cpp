#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool isSame(node* root, int val){
    if(root==NULL){
        return true;
    }
    if(root->data!= val){
        return false;
    }

    return isSame(root->left,val) && isSame(root->right,val);
}

int main(){
     struct node* root= new node(1);
     root->left=new node(1);       
     root->right=new node(1);       
     root->left->left=new node(1);      
     root->left->right=new node(4);      
     root->right->left=new node(1);       
     root->right->right=new node(1);     

     if(isSame(root,1)){
        cout<<"Yes"<<endl;
     }
     else{
        cout<<"No"<<endl;
     }

return 0;
}