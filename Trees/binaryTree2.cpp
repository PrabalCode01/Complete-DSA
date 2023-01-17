#include<bits/stdc++.h>
using namespace std;
  //  Building tree from preorder and inorder array

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data= val;
        left= NULL;
        right= NULL;
    }
};

int search(int inorder[], int start, int end, int curr){
for(int i=start; i<=end; i++){
    if(inorder[i]==curr){
        return i;
    }

}
return -1;
} 


Node* buildtree(int preorder[], int inorder[], int start, int end){
    static int idx= 0;

    if(start>end){
        return NULL;
    }
    int curr= preorder[idx];
    idx++;
    Node* node= new Node(curr);
    if(start==end){
        return node;
    }
    int pos= search(inorder, start, end, curr);
    node->left= buildtree(preorder, inorder, start, pos-1);
    node->right= buildtree(preorder, inorder, pos+1, end);

    return node;
}


void inorderPrint(struct Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main(){
            int preorder[]={1,2,4,3,5};
            int inorder[]={4,2,1,5,3};

Node* newroot = buildtree(preorder, inorder, 0, 4);
inorderPrint(newroot);
cout<<endl;

return 0;
}