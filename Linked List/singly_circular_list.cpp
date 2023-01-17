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
   ~node(){
        int val= data;
        if(next!= NULL){
            delete next;
            next= NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};

void insertAtnode(node* &tail, int element, int d){
    // assumimg that the element is present in the linked list

    // empty list
    if(tail==NULL){
        node* newnode= new node(d);
        tail= newnode;
        tail->next= tail;
    }
    else{
        // non empty list
        // assuming that the element is present in the list

        node* curr= tail;
        while(curr->data != element){
            curr=curr->next;
        }
      // element  found-> curr is representing curr vala node
      node* temp= new node(d);
      temp->next= curr->next;
      curr->next= temp;
    }

}

void print(node* tail){
    node* temp=tail;
    if(tail== NULL){
        cout<<"The list is empty: "<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail= tail->next;
    }
    while(tail != temp);
    cout<<endl;
}

void deletenode(node* &tail, int value){
    // empty list
    
    if(tail == NULL){
        cout<<"List is empty please check again.."<<endl;
        return;
        
    }
    else{
        //non-empty
        //assuming that the value is present in the list

        node* prev= tail;
        node* curr= prev->next;
        while(curr->data != value){
            prev= curr;
            curr= curr->next;

        }
        prev->next= curr->next;

        // if only one node is present in the list
        if(curr== prev){
            tail= NULL;
        }
        else if(tail== curr){
            tail= prev;
        }   
     
        curr->next= NULL;
        delete curr;
    }
}
int main(){
           node* tail= NULL;
           // empty list me insert me insert karr rahe

           insertAtnode(tail, 5, 3);
           print(tail);
        //    insertAtnode(tail, 3, 6);
        //    print(tail);
        //    insertAtnode(tail, 6, 8);
        //    print(tail);
        //    insertAtnode(tail, 8, 10);
        //    print(tail);
        //    insertAtnode(tail, 6, 12);
        //    print(tail);
        //    insertAtnode(tail, 3, 10);
        //    print(tail);


           deletenode(tail, 3);
           print(tail);

        //    deletenode(tail, 10);
        //    print(tail);
           


return 0;
}