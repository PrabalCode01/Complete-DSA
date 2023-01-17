#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void reverse(node* &head, node* curr, node* prev){
    if(curr== NULL){
        head= prev;
        return ;
    }
    node* forward= curr->next;
    reverse(head, forward, curr);

    curr->next= prev;

}

node* reverseLL(node* head){
    node* curr= head;
    node* prev= NULL;
    reverse(head, curr, prev);
    return head;
}



int main(){

            

return 0;
}