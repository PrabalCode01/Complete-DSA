#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data= val;
        left= NULL;
        right=NULL;
    }
};

void leftView_solve(node* root, vector<int> &ans, int level){
    if(root==NULL){
        return;
    }

    if(level==ans.size()){
        ans.push_back(root->data);
       // cout<<root->data<<" ";
    }
    leftView_solve(root->left, ans, level+1);
    leftView_solve(root->right, ans, level+1);
}

// void rightView_solve(node* root, vector<int> &ans, int level){
//     if(root==NULL){
//         return;
//     }

//     if(level==ans.size()){
//         ans.push_back(root->data);
//         cout<<root->data<<" ";
//     }
//     rightView_solve(root->right, ans, level+1);
//     rightView_solve(root->left, ans, level+1);
// }


vector<int> print_leftView(node* root){
    vector<int> ans;
    leftView_solve(root,ans,0);
    
    return ans;
}
// vector<int> print_rightView(node* root){
//     vector<int> ans;
//     rightView_solve(root,ans,0);
//     return ans;
// }
int main(){
      struct node* root= new node(1);
            root->left= new node(2);
            root->right= new node(3);
            root->left->left= new node(4);
            root->left->right= new node(5);
            root->right->left= new node(6);
            root->right->right= new node(7);

            print_leftView(root);
            cout<<endl;
            //print_rightView(root);


            

return 0;
}