#include<bits/stdc++.h>
using namespace std;
 class node{
                 public:
                 int data;
                 node* next;
            };

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
void print(node* &head){
     node* temp= head;
     while(temp != NULL){
         cout<<temp->data<<" ";
         temp= temp->next;
     }
     cout<<endl;
}
int main(){
           node* head=NULL;
           node* second=NULL;
           node* third=NULL;

          //  head= new node();
          //  second= new node();
          //  third= new node();

          //  head->data=1;
          //  head->next=second;

          //  second->data=2;
          //  second->next=third;

          //  third->data=3;
          //  third->next=NULL;

          //  cout<<head->data<<" ";
          //  cout<<second->data<<" ";
          //  cout<<third->data<<endl;
if(isCircular(head)){
    cout<<"Linked list is circular "<<endl;
}
else{
    cout<<"Linked list is not circular"<<endl;
}
return 0;
}