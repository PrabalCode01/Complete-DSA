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
};      // inverting tree means create a mirror image of each subtree

node* invert(node* root){

    if(root==NULL){
        return root;
    }

    node* leftsub= invert(root->right);
    node* rightsub= invert(root->left);

    root->left= leftsub;
    root->right= rightsub;
    
    return root;
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
      struct node* root= new node(1);
            root->left= new node(2);
            root->right= new node(3);
            root->left->left= new node(4);
            root->left->right= new node(5);
            root->right->left= new node(6);
            root->right->right= new node(7);


            invert(root);
            preorder(root);

            

return 0;
}