#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data= val;
        left= NULL;
        right= NULL;
    }
};   // left part of tree is a mirror image of right part then it is symmetric

bool isMirror(node* l, node* r){
    if(l==NULL && r==NULL){
        return true;
    }
    else if(l==NULL || r==NULL){
        return false;
    }
    else if(l->data != r->data){
        return false;
    }

    return isMirror(l->left , r->right) && isMirror(l->right, r->left);
}

bool isSymmetric(node* root){
    if(root==NULL){
        return true;
    }
    return isMirror(root->left, root->right);
}

int main(){
    
            struct node* root= new node(1);
            root->left= new node(2);
            root->right= new node(2);
            root->left->left= new node(4);
            root->left->right= new node(5);
            root->right->left= new node(5);
            root->right->right= new node(4);

            if(isSymmetric(root)){
                cout<<"Tree is Symmetric"<<endl;
            }
            else{
                cout<<"NOt symmetric"<<endl;
            }
            

return 0;
}