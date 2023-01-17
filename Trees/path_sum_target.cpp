#include<bits/stdc++.h>
using namespace std;           

// sum of all node from root to leaf is equal to target sum or not

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

bool pathSumUntil(node* root, int currSum, int targetSum){

    if(root==NULL){
        return false;
    }

    if(root->left==NULL && root->right==NULL){
        return (currSum + root->data) == targetSum; 
    }

    return pathSumUntil(root->left, currSum+root->data, targetSum);
}

bool has_path_sum(node* root, int targetSum){
    return pathSumUntil(root, 0 , targetSum);
}
int main(){
              struct node* root= new node(4);
            root->left= new node(2);
            root->right= new node(3);
            root->left->left= new node(4);
            root->left->right= new node(5);
            root->right->left= new node(6);
            root->right->right= new node(7);


  if(has_path_sum(root,10)){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

return 0;
}