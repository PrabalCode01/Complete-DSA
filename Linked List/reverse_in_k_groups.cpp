#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode *next;
    ListNode(int data){
        this->data= data;
        this->next= NULL;
    }
};

node* kreverse(node* head, int k){
    //base call
    if(head==NULL){
        return NULL;
    }

    node* next= NULL;
    node* curr= head;
    node* prev= NULL;
    int count= 0;
    while(curr != NULL && count<k){
        next= curr->next;
        curr->next= prev;
        prev= curr;
        curr= next;
        count++;
    }

       
    if(next != NULL){
        head->next= kreverse(next, k);
    }

    return prev;    
}

ListNode* reverseKGroups(ListNode* head, int k){
    if(head==NULL || k==1){
        return head;
    }

    ListNode* temp = new ListNode(0);
    temp->next = head;  

    ListNode* curr= temp;
    ListNode *nex = temp;
    ListNode *prev= temp;
    int count=0;

    while(curr->next!=NULL){
        curr=curr->next;
        count++;
    }

    while(count>=k){
        curr=prev->next;
        nex= curr->next;

        for(int i=1; i<k; i++){
            curr->next = nex->next;
            nex->next =  prev->next;
            prev->next=nex;
            nex=curr->next;
        }
        prev=curr;
        count -= k;
    }
return temp->next;
}

void insertAtHead(node* &head, int d){
    // new node create
    node* temp= new node(d);
    temp->next= head;
    head = temp;
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
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,7);
    insertAtHead(head,9);
    insertAtHead(head,11);
    print(head);
            
     node* newnode= kreverse(head,3);

    print(newnode);

return 0;
}