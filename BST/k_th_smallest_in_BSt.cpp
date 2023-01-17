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


int solve(node* root, int& i, int k){

    if(root==NULL){
        return -1;
    }

    int left= solve(root->left, i,k);

    if(left != -1){
        return left;
    }
    i++;
    if(i==k){
        return root->data;
    }
    return solve(root->right,i,k);
}

int main(){
         node* root = new node(5);
    root->left=  new node(3);
    root->right=  new node(6);
    root->left->left=  new node(2);
    root->left->right=  new node(4);
   // root->right->left=  new node();
    root->right->right=  new node(7);
    root->right->right->right=  new node(8);

  

    cout<<solve(root,0, 3)<<endl;    

return 0;
}