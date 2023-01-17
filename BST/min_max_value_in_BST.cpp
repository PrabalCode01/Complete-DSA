#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node *left, *right;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
    
};

node* min_value(node* root){
    node* temp= root;
    while(temp->left!=NULL){
        temp= temp->left;
    }
    return temp;
}

node* max_value(node* root){
    node* temp= root;
    while(temp->right!=NULL){
        temp= temp->right;
    }
    return temp;
}

int main(){
    node* root = new node(5);
    root->left=  new node(3);
    root->right=  new node(6);
    root->left->left=  new node(2);
    root->left->right=  new node(4);
   // root->right->left=  new node();
    root->right->right=  new node(10);

       cout<<min_value(root)->data<<endl;     
       cout<<max_value(root)->data<<endl;     

return 0;
}