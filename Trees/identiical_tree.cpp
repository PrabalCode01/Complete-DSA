#include<bits/stdc++.h>
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

bool is_identical(node* r1, node* r2){

    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1==NULL && r2!=NULL  ){
        return false;
    }
    if(r1!=NULL && r2==NULL  ){
        return false;
    }

    bool leftcheck= is_identical(r1->left, r2->left);
    bool rightcheck= is_identical(r1->right, r2->right);

    bool value = r1->data == r2->data;

    if(leftcheck && rightcheck && value){
      return true;
    }
    else{
        return false;
    }
}

int main(){
            
            struct node* root1= new node(1);
            root1->left= new node(2);
            root1->right= new node(3);
            root1->left->left= new node(4);
            root1->left->right= new node(5);
            root1->right->left= new node(6);
            root1->right->right= new node(7);

            struct node* root2= new node(1);
            root2->left= new node(2);
            root2->right= new node(3);
            root2->left->left= new node(4);
            root2->left->right= new node(5);
            root2->right->left= new node(6);
            root2->right->right= new node(7);

            if(is_identical(root1,root2)){
                cout<<"Trees are same"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

return 0;
}