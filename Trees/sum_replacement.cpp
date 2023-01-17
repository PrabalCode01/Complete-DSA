#include<bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        this->data= val;
        left=NULL;
        right=NULL;
    }
};

void sum_replace(node* root){

    if(root==NULL){
        return;
    }

    sum_replace(root->left);
    sum_replace(root->right);

    if(root->left!=NULL){
        root->data += root->left->data;
    }
    if(root->right!=NULL){
        root->data += root->right->data;
    }

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

            preorder(root);
            cout<<endl;
            sum_replace(root);
            cout<<endl;
            preorder(root); 

return 0;
}