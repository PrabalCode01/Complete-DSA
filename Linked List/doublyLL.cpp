#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int d){
        data=d;
        prev= NULL;
        next= NULL;
    }
    ~node(){
        int val= data;
        if(next!= NULL){
            delete next;
            next= NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }


};

void print(node* &head ){
    node* temp=head;
    while(temp!= NULL){
    cout<<temp->data<<" ";
temp= temp->next;
    }
    cout<<endl;
}

int getLength(node* head){
    int len= 0;
      node* temp=head;
    while(temp!= NULL){
    len++;
temp= temp->next;
    }
    return len;
}

void insertAthead(node* &tail, node* &head, int d){
    // if list is empty
    if(head==NULL){
        node* temp= new node(d);
        head= temp;
        tail=temp;
    }
    else{
    node* temp= new node(d);

    temp->next= head;
    head->prev=temp;
    head= temp;
    }
}



void insertAttail(node* &tail,node* &head,  int d){
    if(tail==NULL){
        node* temp= new node(d);
        tail=temp;
        head= temp;
    }
    else
  {  node* temp= new node(d);

    tail->next= temp;
    temp->prev= tail;
    tail= temp;}
}

void insertAtPosition( node* &tail, node* &head, int position, int d){
// for inserting a first
    if(position==1){
        insertAthead(tail,head, d);
        return;
    }


    node* temp= head;
    int cnt=1;

    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    }

    // for inserting at last position
    if(temp->next==NULL){
        insertAttail(tail,head,d);
        return;
    }

   // creating a new node for d
   node* nodetoInsert= new node(d);
   nodetoInsert->next= temp->next;
   temp->next->prev=nodetoInsert;
   temp->next= nodetoInsert;
   nodetoInsert->prev= temp;

}

void deletenode(int pos, node* &head){
    // deleting first node
    if(pos==1){
        node* temp= head;
        temp->next->prev = head;
        head= temp->next;
        temp->next= NULL;
        delete temp;
    }
    else{
        // deleting any middle or last node
        node* curr= head;
        node* prev= NULL;

        int cnt=1;
        while(cnt<pos){
            prev= curr;
            curr= curr->next;
            cnt++;
        }

        curr->prev= NULL;
        prev->next= curr->next;
        curr->next= NULL;
        delete curr;
    }
}

int main(){
//    node* node1= new node(10);
//     node* head= node1;
//     node* tail= node1;

node* head= NULL;
node* tail=NULL;

    print(head);
    cout<<getLength(head)<<endl;

    insertAthead(tail,head,12);
    print(head);
       //cout<<getLength(head)<<endl;

   insertAttail(tail,head, 8);
   print(head);       


insertAtPosition(tail,head, 2,100);
print(head);



deletenode(3, head);
print(head);


return 0;
}