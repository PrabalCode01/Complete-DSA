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

pair<int,int> pred_succ(node* root, int key){
    node* temp = root;
    int pred= -1;
    int succ= -1;

    while(temp->data!=key){
        if(temp->data >key){
            succ= temp->data;
            temp= temp->left;
        }
        else{
        pred= temp->data;
        temp= temp->right;
        }

        node* lefttree= temp->left;
        while(lefttree!=NULL){
            pred = lefttree->data;
            lefttree= lefttree->right;
        }

        node* righttree= temp->right;
        while(righttree!=NULL){
            succ= righttree->data;
            righttree= righttree->left;
        }
    }

    pair<int,int> ans= make_pair(pred,succ);
    return ans;
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

  cout<<pred_succ(root,6).first<<" "<<pred_succ(root,6).second<<endl;

return 0;
}