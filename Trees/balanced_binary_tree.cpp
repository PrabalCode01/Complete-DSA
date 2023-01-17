#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        this->data= val;
        left=NULL;
        right=NULL;
    }
};

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}

// bool is_balanced(node* root){           // time complexity is O(n^2)

//     if(root==NULL){
//         return true;
//     }
    
//     if(is_balanced(root->left)==false){
//         return false;
//     }
//     if(is_balanced(root->right)==false){
//         return false;
//     }

//     int lh= height(root->left);
//     int rh= height(root->right);

//     if(abs(lh-rh)<=1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


bool is_balanced(node* root, int* height){   
   if(root==NULL){
    return true;              //time complexity is O(n)  due to using height pointer
   }
   
    int lh=0,rh=0;
    if(is_balanced(root->left, &lh)==false){
        return false;
    }
    if(is_balanced(root->right, &rh)==false){
        return false;
    }

    *height=max(lh,rh)+1;

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
             struct node* root= new node(1);
            root->left= new node(2);
            root->right= new node(3);

            root->left->left= new node(4);
            root->left->right= new node(5);
            root->right->left= new node(6);
             root->right->right= new node(7);
            // root->right->right->left= new node(8);
            // root->right->right->left->left= new node(9);


    //    if(is_balanced(root)){
    //     cout<<"Balanced tree "<<endl;
    //    }
    //    else{
    //     cout<<"Unbalanced tree "<<endl;
    //    }

    int height=0;
       if(is_balanced(root,&height)){
        cout<<"Balanced tree "<<endl;
       }
       else{
        cout<<"Unbalanced tree "<<endl;
       }
return 0;
}