#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<queue>
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

vector<int> topView(node *root){

    vector<int> res;
    if(root==NULL){
        return res;
    }


    map<int,int> mp;
    queue<pair<node*,int>> q;
    q.push({root,0});

    while(!q.empty()){
        auto it= q.front();
        q.pop();

        node* curr = it.first;
        int hd= it.second;

        if(mp.find(hd)== mp.end()){
            mp[hd]= curr->data;

        }

        if(curr->left != NULL){
            q.push({curr->left,hd-1});
        }
        if(curr->right!=NULL){
            q.push({curr->right,hd+1});
        }
    }
        for( auto it: mp){
            res.push_back(it.second);
        }
        return res;


}

vector<int> bottomView(node* root){
    vector<int> res;

    if(root==NULL){
        return res;
    }

    map<int,int> mp;
    queue<pair<node*,int>> q;

    q.push({root,0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();

        node* curr= it.first;
        int hd= it.second;

        mp[hd]= curr->data;
            if(curr->left != NULL){
            q.push({curr->left,hd-1});
        }
        if(curr->right!=NULL){
            q.push({curr->right,hd+1});
        }


    }
    for(auto it: mp){
        res.push_back(it.second);
    }

    return res;
}
int main(){
  struct node* root= new node(1);
            root->left= new node(2);
            root->right= new node(3);
            root->left->left= new node(4);
            root->left->right= new node(5);
            root->right->left= new node(6);
            root->right->right= new node(7);
            root->right->right->right= new node(8);

    for(int i=0; i<bottomView(root).size(); i++){
        cout<<bottomView(root)[i]<<" ";
    }
    // for(int i=0; i<topView(root).size(); i++){
    //     cout<<topView(root)[i]<<" ";
    // }
            

return 0;
}