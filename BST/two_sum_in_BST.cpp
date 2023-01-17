#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;


    node(int val){
        data = val;
        left= NULL;
        right= NULL;
    }
};


void inorder(node* root, vector<int>&in){
    if(root==NULL){
        return ;
    }
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

bool two_Sum(node* root, int target){
    vector<int> ans;
    inorder(root, ans);
    
    int i=0;
    int j=ans.size()-1;
    while(i<j){
        int sum = ans[i]+ans[j];
        if(sum==target){
            return true;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
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


    cout<<two_Sum(root, 16)<<endl;      

return 0;
}