#include<bits/stdc++.h>
using namespace std;

void insertatTail(struct node* anshead, struct node* anstail, int val){
    node* temp = new node(val);
    if(head==NULL){
       head= temp;
       tail= temp;
       return;
    }
    else{
        tail->next= temp;
        tail=temp;
    }
}

struct node* add(struct node* first, struct node* second){
    int carry=0;
    while(first != NULL && second != NULL){
        int sum= carry + first->data + second->data;
        int digit= sum%10;

        insertatTail(anshead, anstail, digit);
            carry= sum/10;
            first= first->next;
            second= second->next;
        
    }
    while(first!= NULL){
        int sum= carry + first->data;
        int digit= sum%10;
        insertatTail(anshead, anstail, digit);
        carry= sum/10;
            first= first->next;
    }
    while(second!= NULL){
        int sum= carry + second->data;
        int digit= sum%10;
        insertatTail(anshead, anstail, digit);
        carry= sum/10;
            second= second->next;
    }
    while(carry!= 0){
        int sum= carry;
        int digit= sum%10;
        insertatTail(anshead, anstail, digit);
        carry= sum/10;
    }
    return anshead;
}

void print(node*head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}





struct node* addTwolists(struct node* first , struct node* second){

    first = reverse(first);
    second= reverse(second);

    node* ans= add(first, second);

    ans= reverse(ans);

    return ans;
}
int main(){
            

return 0;
}