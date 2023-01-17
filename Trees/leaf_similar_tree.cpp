#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void traversal(node* root, vector<int> &v){
   if(root==NULL){
    return;
   }
   if(root->left==NULL && root->right==NULL){
    v.push_back(root->data);
   }
   if(root->left!=NULL){
    traversal(root->left,v);
   }
   if(root->right!=NULL){
    traversal(root->right,v);
   }

}

bool leaf_similar(node* root1, node* root2){
    vector<int> a;
    vector<int> b;
    
    traversal(root1, a);
    traversal(root2, b);

    return a==b;

}

int main(){
        struct node* root1= new node(1);
     root1->left=new node(1);       
     root1->right=new node(1);       
     root1->left->left=new node(1);      
     root1->left->right=new node(1);      
     root1->right->left=new node(1);       
     root1->right->right=new node(4); 
            
        struct node* root2= new node(1);
     root2->left=new node(1);       
     root2->right=new node(1);       
     root2->left->left=new node(5);      
     root2->left->right=new node(1);      
     root2->right->left=new node(1);       
     root2->right->right=new node(4); 

     if(leaf_similar(root1, root2)){
        cout<<"Similar leaf tree"<<endl;
     }
     else{
        cout<<"not similar leaf tree"<<endl;
     }
            

return 0;
}