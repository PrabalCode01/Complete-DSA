#include<bits/stdc++.h>
using namespace std;
#include<vector>

class node{
    public:
int data;
node* next;

node(int data){
    this->data= data;
    next= NULL;
}


bool checkpalindrome(vector<int> arr){
    int n= arr.size();
    int s=0;
    int e= n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}


    bool ispalindrome(node* head){

        vector<int> arr;
         node* temp= head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }

        return checkpalindrome(arr);
    }
};

int main(){
            

return 0;
}