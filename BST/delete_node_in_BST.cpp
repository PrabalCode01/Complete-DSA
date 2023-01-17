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

node* leftmost_in_rightSubtree(node* root){
    while(root->left!=NULL){
        root= root->left;
    }
    return root;
}

node* deletenode(node* root, int key){

    if(root==NULL){
        return NULL;
    }

    if(root->data > key){
        root->left= deletenode(root->left, key);
    }
    else if(root->data < key){
        root->right= deletenode(root->right, key);
    }
    else{ // root-data== key

      if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
      } 
      if(root->left!=NULL && root->right==NULL){
        node* temp = root->left;
        delete root;
        return temp;
      } 
      if(root->left==NULL && root->right!=NULL){
        node* temp = root->right;
        delete root;
        return temp;
      } 
      
    node* tempNode = leftmost_in_rightSubtree(root->right);
      int tempval= root->data;
      root->data = tempNode->data;
      tempNode->data = tempval; 

    root->right= deletenode(root->right,key);
    return root;
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
       node* root = new node(5);
    root->left=  new node(3);
    root->right=  new node(6);
    root->left->left=  new node(2);
    root->left->right=  new node(4);
   // root->right->left=  new node();
    root->right->right=  new node(7);

    deletenode(root,5   );
    inorder(root);


            

return 0;
}