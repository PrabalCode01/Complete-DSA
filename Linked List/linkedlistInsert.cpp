#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

// constructor
    node(int data){
        this->data= data;
        this->next= NULL;
    }
    //destructor
~node(){
    int value= this->data;
    //memory free
    if(this->next!=NULL){
        delete next;
        this->next= NULL;
    }
    cout<<"Memory is free for node with data "<< value<<endl;
}
};

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

void insertAtPosition( node* &tail, node* &head, int position, int d){
// for inserting a first
    if(position==1){
        insertAthead(head, d);
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
        insertAtTail(tail,d);
        return;
    }

   // creating a new node for d
   node* nodetoInsert= new node(d);
   nodetoInsert->next= temp->next;
   temp->next= nodetoInsert;

}

void print(node* &head){
     node* temp= head;
     while(temp != NULL){
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

void deletenode(int pos, node* &head){
   // deletion fist or start node
   if(pos==1){
    node* temp= head;
    head= head->next;
    temp->next=NULL;
    // free the memory of start node
    delete temp;
   }
   else{
       // deleting any middle or last node
       node* curr= head;
       node* prev= NULL;

       int cnt=1;
       while(cnt<pos){
           prev=curr;
           curr= curr->next;
           cnt++;
       }

       prev->next= curr->next;
       curr->next= NULL;
       // free the memory
       delete curr;
   }

}

int main(){
   // created a new node
    node* node1= new node(10);
            //cout<<node1->data<<endl;
            //cout<<node1->next<<endl;

            // head pointed to node1
            node* head=node1;
            node* tail=node1;



print(head);

        //    insertAthead(head, 12);
        //    print(head);
 
        //     insertAthead(head, 15);
        //     print(head);


            cout<<endl;
            insertAtTail(tail,12);
            print(head);


             insertAtTail(tail, 15);
            print(head);

            // inserting a node at the 3 position 
           insertAtPosition(tail, head, 3,8);
           //insertAtPosition(tail, head, 1,8);
           //insertAtPosition(tail, head, 4,8);
           print(head);
cout<<endl;

// to verify head and tail
cout<<"head "<<head->data<<endl; 
cout<<"tail "<<tail->data<<endl; 

deletenode(1,head);
print(head);
cout<<endl;
         cout<<"head "<<head->data<<endl; 
cout<<"tail "<<tail->data<<endl;   

return 0;
}