#include<bits/stdc++.h>
using namespace std;
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

int calcHeight(Node* root){ // height of a binary tree

    if(root==NULL){
        return 0;
    }
    int lHeight= calcHeight(root->left);
    int rHeight= calcHeight(root->right);

    return max(lHeight,rHeight)+1;
}
// daimeter of tree

// int diameterTree(Node* root){   // Time complexity = O(n2)
//     if(root==NULL){
//         return 0;
//     }

//     int lheight= calcHeight(root->left);
//     int rheight= calcHeight(root->right);

//     int currDiameter= lheight+rheight+1;

//     int ldiameter= diameterTree(root->left);
//     int rdiameter= diameterTree(root->right);

//     return max(currDiameter, max(ldiameter,rdiameter));
// }


int calcDiameter(Node* root, int* height){   // Time complexity == O(n)
    if(root== NULL){
        *height=0;
        return 0;
    }
    
    int lh=0, rh=0;
    int ldiameter= calcDiameter(root->left,&lh);
    int rdiameter= calcDiameter(root->right,&rh);

    int currdiameter=lh+rh+1;
    *height= max(lh,rh)+1;

    return max(currdiameter, max(ldiameter,rdiameter));
}
int main(){
    Node* root = new Node(1);
    root->left=  new Node(2);
    root->right=  new Node(3);
    root->left->left=  new Node(4);
    root->left->right=  new Node(5);
    root->right->left=  new Node(6);
    root->right->right=  new Node(7);
            

    cout<<calcHeight(root)<<endl;
    //cout<<diameterTree(root)<<endl;
    int height= 0;
    cout<<calcDiameter(root,&height)<<endl;
    /*
            1
          /    \
        2        3
     /  \      /  \
    4     5    6    7
    
*/

return 0;
}