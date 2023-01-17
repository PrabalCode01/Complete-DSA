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
bool searchBST(node* root, int val){
    if(root==NULL){
        return false;
    }
    if(root->data==val){
        return true;
    }
    if(root->data< val){
        return searchBST(root->right, val);
    }

    return searchBST(root->left,val);
}
// node* searchBST(node* root, int val){
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==val){
//         return root;
//     }
//     if(root->data< val){
//         return searchBST(root->right, val);
//     }

//     return searchBST(root->left,val);
// }
int main(){
      node* root = new node(5);
    root->left=  new node(3);
    root->right=  new node(6);
    root->left->left=  new node(2);
    root->left->right=  new node(4);
   // root->right->left=  new node();
    root->right->right=  new node(7);

    //cout<<searchBST(root,7)->data<<endl;
    cout<<searchBST(root,3)<<endl;       

return 0;
}