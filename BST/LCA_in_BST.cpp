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

node* LCA_in_BST(node* root, node* p, node* q){
    if(root==NULL){
        return NULL;
    }
    if(root->data > p->data && root->data > q->data){
        return LCA_in_BST(root->left, p,q);
    }
    if(root->data < p->data && root->data < q->data){
        return LCA_in_BST(root->right, p,q);
    }
    return root;
}

// node* Lowest_common_ancestor(node* root, int p,int q){
//      node* temp= NULL;
//     while(root!=NULL){
//         if(root->data > p && root->data >q){
//             root = root->left;
//         }
//         else if(root->data < p && root->data < q) {
//              root= root->right;
//         }
//         else{
//             temp= root;
//         }
        
//     }
//     return temp;
// }



int main(){
    node* root = new node(5);
    root->left=  new node(3);
    root->right=  new node(6);
    root->left->left=  new node(2);
    root->left->right=  new node(4);
   // root->right->left=  new node();
    root->right->right=  new node(7);
    root->right->right->right=  new node(8);

    cout<<LCA_in_BST(root,root->left->left,root->left->right)->data<<endl;

return 0;
}