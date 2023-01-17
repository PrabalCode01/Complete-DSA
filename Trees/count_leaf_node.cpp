#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data= val;
        left= NULL;
        right= NULL;
    }
};
int inorder(struct node* root ){
    
int cnt;
    if(root==NULL){
        return 0;
    }
   inorder(root->left);

   if(root->left==NULL && root->right==NULL){
    cnt++;                        //                  code for counting leaf node
   }
   inorder(root->right);

   return cnt;
}

int main(){
 struct node* root= new node(1);
            root->left= new node(2);
            root->right= new node(3);

            root->left->left= new node(4);
            root->left->right= new node(5);
            root->right->left= new node(6);
            root->right->right= new node(7);
    cout<<inorder(root)<<endl;
   

return 0;
}