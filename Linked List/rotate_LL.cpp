#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    ndoe* next;
    int data;

    node(int val){
        next=NULL;
        data= val;
    }
};

node* rotate_list(node* head; int k){
    if(head==NULL || head->next==NULL){
        return head;
    }
    for(int i=0; i<k; i++){
        node* temp = head;
        while(temp->next->next!=NULL){
            temp= temp->next;
        }
        node* end = temp->next;
        temp->next = NULL;
        end->next = head;
        head = end;

    }
    return head;
}


node* rotateRight(node* head, int k){
    if(head==NULL || head->next==NULL || k==0){
        return head;
    }

    node* temp = head;
    int len =1;
    while(temp->next!=NULL){
        ++len;
        temp= temp->next;
    }

    temp->next = head;
    k = k%len;
    int end = len-k;

    while(end--){
        temp = temp->next;
    }

    head=temp->next;
    temp->next=NULL;

    return head;
}

int main(){

    return 0;
}