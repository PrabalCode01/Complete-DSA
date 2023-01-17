#include<bits/stdc++.h>
#include<vector>
#include<queue>
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

vector<int> zig_zag_travel(node* root){
    vector<int> ans;

    if(root==NULL){
        return ans;
    }

    queue<node*> q;
    q.push(root);
    bool left_to_right= true;
    while(!q.empty()){
        int size= q.size();
        vector<int> temp(size);
        for(int i=0; i<size; i++){
            node* frontNode= q.front();
            q.pop();
            int index= left_to_right ? i : size-i-1;
            temp[index]= frontNode->data;
            if(frontNode->left){ q.push(frontNode->left);}
            if(frontNode->right){ q.push(frontNode->right);}
            left_to_right = !left_to_right;
        for(auto i: temp){
            ans.push_back(i);
        }
        }
    }
    return ans;
}

int main(){
     struct node* root1= new node(1);
            root1->left= new node(2);
            root1->right= new node(3);
            root1->left->left= new node(4);
            root1->left->right= new node(5);
            root1->right->left= new node(6);
            root1->right->right= new node(7);

            zig_zag_travel(root1);
            

return 0;
}