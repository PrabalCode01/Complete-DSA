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

void insert_element_at_end(node* &head, int val){
    
     node* n = new node(val);
 if(head==NULL){
         head= n;
         return ;
     }
     node* temp= head;
     while(temp->next!=NULL){
         temp= temp->next;
         temp->next = n;
     }
    

}
void print_LL(node* head){
    node* temp= head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp= temp->next;
    }
     cout<<"NULL"<<endl;
}

int main(){
            
node* head=NULL;
insert_element_at_end(head,34);
insert_element_at_end(head,2);
insert_element_at_end(head,34);


print_LL(head);
return 0;

}