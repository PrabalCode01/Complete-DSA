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


bool detectCycle(node* head){
    if(head==NULL || head->next==NULL){
        return false;
    }

    node* fast=head;
    node* slow= slow;

    while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow= slow->next;

        if(fast==slow){
            return true;
        }
    }

    return false;
}

// return the node where cycle begin;

node* detect(node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node* fast=head;
    node* slow= head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow= slow->next;
        fast=fast->next->next;
        
        if(slow==fast){
            fast=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            } 
        return slow;
        }
    }
    return NULL;
}

int main(){

    return 0;
}