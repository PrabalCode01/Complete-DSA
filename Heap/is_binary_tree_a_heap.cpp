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

int countNodes(struct node* root){
    if(root==NULL){
        return 0;
    }

    int ans= 1+ countNodes(root->left) + countNodes(root->right);
    return ans;
}

bool is_CBT(struct node* root, int i,int cnt){
    if(root==NULL){
        return true;
    }
    if(i>=cnt){      // for 0 based indexing
        return false;
    }
    else{
        bool left_ck= is_CBT(root->left, 2*i+1, cnt);
        bool right_ck= is_CBT(root->right, 2*i+2, cnt);
        return left_ck && right_ck;
    }
}

bool is_max_order(struct node* root){

    if(root->left==NULL && root->right==NULL){
        return true;
    }
    if(root->right==NULL){
        return (root->data > root->left->data);
    }
    else{
        bool left_cek = is_max_order(root->left);
        bool right_cek = is_max_order(root->right);

return  (left_cek && right_cek && (root->data>root->left->data) && (root->data>root->right->data));

    }
}
bool is_heap(node* root){
  int index=0;
  

  if( is_CBT(root,index,countNodes(root)) && is_max_order(root)){
    return true;
  }
 return false;
}

int main(){
     struct node* root= new node(7);
            root->left= new node(6);
            root->right= new node(5);

            root->left->left= new node(4);
            root->left->right= new node(3);
            root->right->left= new node(2);
            root->right->right= new node(1);

            cout<<is_heap(root)<<endl;
            

return 0;
}