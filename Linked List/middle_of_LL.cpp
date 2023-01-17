#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        data= d;
        next= NULL;
    }
};


// 2 pointer approach
node* middleNode(node* head){
    if(head==NULL){
        return head;
    }
    node* slow= head;
    node* fast= head;

    while(fast!=NULL && fast->next!=NULL ){
        slow= slow->next;
        fast= fast->next->next;
    }
    return slow;
}

void insertAthead(node* &head, int val){
    //new node create
    node* temp= new node(val);
    temp->next= head;
    head= temp;
}

void print(node* head){
    node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}


node* middle(node* head){
    node* slow=head;
    node* fast=head;

    if(head==NULL){
        return head;
    }

    while(fast!=NULL || fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;    
}
int main(){
    node* head= NULL;
    insertAthead(head, 2);
    insertAthead(head, 3);
    insertAthead(head, 4);
    insertAthead(head, 5);
    insertAthead(head, 6);
    insertAthead(head, 7);
    insertAthead(head, 8);
    print(head);
    cout<<endl;

    node* middle = middleNode(head);
    
    cout<<middle->data<<endl;
  
            

return 0;
}