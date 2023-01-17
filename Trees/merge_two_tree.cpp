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
};

node* merge(node* r1, node* r2){         // TC: O(n+m) 
                                         //  SC: O(max(n,m))

    if(r1==NULL && r2==NULL){
        return NULL;
    }
    if(r1==NULL){
        return r2;
    }
    if(r2==NULL){
        return r1;
    }

    node* newnode= new node(r1->data + r2->data);
    cout<<newnode->data<<" ";

    newnode->left = merge(r1->left, r2->left);
    newnode->right = merge(r1->right, r2->right);
    
    return newnode;
}
int main(){
            struct node* root1= new node(1);
            root1->left= new node(2);
            root1->right= new node(3);
            root1->left->left= new node(4);
            root1->left->right= new node(5);
            root1->right->left= new node(6);
            root1->right->right= new node(7);

            struct node* root2= new node(1);
            root2->left= new node(2);
            root2->right= new node(3);
            root2->left->left= new node(4);
            root2->left->right= new node(5);
            root2->right->left= new node(6);
            root2->right->right= new node(7);

            merge(root1, root2);   // printed in preorder
            cout<<endl;

return 0;
}