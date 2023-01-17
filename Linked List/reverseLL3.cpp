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


// iterative method
// node* reverse(node* &head){
//   node* prev= NULL;
//   node* curr= head;
//   node* newnode;

//   while(curr!=NULL){

//     newnode= curr->next;
//     curr->next= prev;

//     prev= curr;
//     curr= newnode;
//   }

//   return prev;
// }


// recursive method
node* reverseRecursively(node* &head){

    if(head==NULL || head->next== NULL){
        return head;
    }
    node* newhead= reverseRecursively(head->next);
    head->next->next = head;
    head->next= NULL;

    return newhead;   
}




void insertAthead(node* &head, int d){
    
    // new node create
    node* temp= new node(d);
    temp->next= head;
    head=temp;
}

void insertAtTail(node* &tail, int d){
    node* temp= new node(d);
    tail->next=temp;
    tail=temp;
}

void print(node* head){
    node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int main(){
    node* head= NULL;

    // int x;
    // for(int i=0; i<5; i++){
    //     cin>>x;
    //     insertAtTail(tail, x);
    // }


    insertAthead(head,10);
    insertAthead(head,20);
    insertAthead(head,5);
    insertAthead(head,30);
    print(head);

    
   node* newhead= reverseRecursively(head);
   print(newhead);

    

            

return 0;
}