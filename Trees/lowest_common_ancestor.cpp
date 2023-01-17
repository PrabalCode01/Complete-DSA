#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
         data= val;
         left=NULL;
         right=NULL;
    }


};

// bool getpath(node* root, int key, vector<int> &path){

//     if(root==NULL){
//         return false;
//     }
//     path.push_back(root->data);
//     if(root->data==key){
//         return true;
//     }

//     if(getpath(root->left,key,path) || getpath(root->right,key,path)){
//         return true;
//     }

//     path.pop_back();
//     return false;
// }

// int LCA(node* root, int n1,int n2){
//     vector<int> path1, path2;
    
//     if(!getpath(root,n1,path1) ||  !getpath(root,n2,path2)){
//     return -1;
//     }

//     int path_change;
//     for(path_change=0; path_change< path1.size() && path2.size(); path_change++){
//         if(path1[path_change] != path2[path_change]){
//             break;
//         }
//     }
//     return path1[path_change-1];
// }

node* LCA2(node* root, int n1,int n2){

    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }

    node* leftLca= LCA2(root->left,n1,n2);
    node* rightLca= LCA2(root->right,n1,n2);

    if(leftLca && rightLca){
        return root;
    }
    if(leftLca!= NULL){
        return leftLca;
    }
    return rightLca;
}

int main(){
            
             node* root= new node(1);
            root->left= new node(2);
            root->right= new node(3);

            root->left->left= new node(4);
            root->right->left= new node(5);
            root->right->right= new node(6);
             root->right->left->left= new node(7);

             int n1=7;
             int n2=4;

            // int lca= LCA(root, n1,n2);
           // node* lca= LCA2(root,n1,n2);
           cout<<LCA2(root,n1,n2)->data<<endl;
            //  if(lca==-1){
            //     cout<<"lca does not exist "<<endl;
            //  }
            //  else{
            //     cout<<" LCA: "<<lca<<endl;
            //  }


            //  if(lca==NULL){
            //     cout<<"lca does not exist "<<endl;
            //  }
            //  else{
            //     cout<<" LCA: "<<lca->data<<endl;
            //  }
return 0;
}