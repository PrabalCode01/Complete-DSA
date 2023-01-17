#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data= val;
        next= NULL;
    }

};

node* reversingNode(node *head){
    //node* head= new node();
    if(head==NULL || head->next==NULL){
        return head;
    }
    node * prev= NULL;
    node* curr= head;
    node* forward= NULL;

    while(curr != NULL){
        forward= curr->next;
        curr->next= prev;
        prev= curr;
        curr= forward;
    }
    return prev;
}

void print(node* head){
    node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
// void print(node* n){
//     while(n!=NULL){
//         cout<<n->data<<" ";
//         n=n->next;
//     }
//     cout<<endl;
// }
// void input(node* n){
//     while(n!=NULL){
//         cin>>n->data;
//         n=n->next;
//     }
//     cout<<endl;
// }
void insertAthead(node* &head, int d){
    
    // new node create
    node* temp= new node(d);
    temp->next= head;
    head=temp;
}
int main(){
    
     node* node1= new node(2);
   
      node* head=node1;
   insertAthead(head, 12);
    print(head);
    insertAthead(head, 14);
    print(head);
    insertAthead(head, 16);
    print(head);
 cout<<endl;
    
print(head);
*reversingNode(head);
print(head);

            

return 0;
}