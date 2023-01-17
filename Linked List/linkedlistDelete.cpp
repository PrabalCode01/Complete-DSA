#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;

//constructor
node(int val){
    data=val;
    next=NULL;
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

void print(node* &head){
    node* temp= head;
    while(temp!=NULL)

    { cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}

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
       while(cnt<position){
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
            

return 0;
}