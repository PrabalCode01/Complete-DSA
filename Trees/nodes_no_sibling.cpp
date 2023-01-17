#include<bits/stdc++.h>
using namespace std;
    
    // printing all nodes that do not have siblings

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

void findNOde(node* root, vector<int> &ans){

    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }

    if(root->left!=NULL && root->right!=NULL){
        findNOde(root->left,ans);
        findNOde(root->right,ans);
    }
    else if(root->left!=NULL){
        ans.push_back(root->left->data);
        cout<<root->left->data<<" ";
        findNOde(root->left,ans);
    }
    else if(root->right!=NULL){
        ans.push_back(root->right->data);
        cout<<root->right->data<<" ";
        findNOde(root->right,ans);
    }
    return;
}

// vector<int> noSibling(node* root){
//     vector<int> res;
//     findNOde(root,res);
//     if(res.size()==0){
//         res.push_back(-1);
//     }
//     return res;
// }
int main(){
             struct node* root= new node(1);
            root->left= new node(2);
            //root->right= new node(3);
            root->left->left= new node(4);
           // root->left->right= new node(5);
           // root->right->left= new node(5);
           // root->right->right= new node(4);

            vector<int> res;
            findNOde(root, res);
return 0;
}