#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data= data;
        this->next= next;
    }
};
void insertAthead(node* &head, int d){
    
    // new node create
    node* temp= new node(d);
    temp->next= head;
    head=temp;
}
void print(node* &head){
     node* temp= head;
     while(temp != NULL){
         cout<<temp->data<<" ";
         temp= temp->next;
     }
     cout<<endl;
}



bool isCircular(node* head){
    if(head==NULL){
        return true;
    }

    node* temp= head->next;
    while(temp!=NULL && temp!=head){
   temp= temp->next;
    }

    if(temp=head){
return true;
    }
    
return false;
    
}

int main(){
    node* tail= NULL;
insertAthead(tail, 5);
 insertAthead(tail, 6);
// insertAthead(tail, 7);
print(tail);

if(isCircular(tail)){
    cout<<"Linked list is circular "<<endl;
}
else{
    cout<<"Linked list is not circular"<<endl;
}

return 0;
}