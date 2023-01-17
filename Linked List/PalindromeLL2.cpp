#include<bits/stdc++.h>
using namespace std;
class node{
    int data;
    node* next= NULL;
  
  node* getmid(node* head){
    node* slow= head;
    node* fast= head->next;
    while(fast!=NULL && fast->next !=NULL){
        slow= slow->next;
        fast= fast->next->next;
    }
    return slow;
  }

  node* reverse(node* head){
    node* curr=head;
    node* prev= NULL;
    node* next= NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next= prev;
        prev= curr;
        curr= next;
    }
    return prev; 
  }

    bool isPalindrome(node* head){
        if(head->next==NULL){
            return head;
        }

        node* middle= getmid(head);

        node* temp= middle->next;
        middle->next = reverse(temp);

        node* head1= head;
        node* head2= middle->next;

        while(head2 != NULL){
            if(head1->data != head2->data){
             return false;
            }
            head1= head1->next;
            head2= head2->next;


        }
        temp= middle->next;
        middle->next = reverse(temp);

        return true;
    }
};

int main(){
            

return 0;
}