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

node* insertBST(node* root, int val){
    if(root==NULL){
        return new node(val);
    }  
    if(val<root->data){
        root->left= insertBST(root->left,val);
    }
    else{
        //val>root->data
        root->right= insertBST(root->right,val);
    }

    return root;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
            node* root=NULL;

            root = insertBST(root,5);
            insertBST(root,1);
            insertBST(root,3);
            insertBST(root,4);
            insertBST(root,2);
            insertBST(root,7);

        inorder(root);  
// inorder traversal of binary search tree always gives sorted order of elements
// as above code give 1 2 3 4 5 7

return 0;
}