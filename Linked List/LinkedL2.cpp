#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    // node(int val){
    //     data=val;
    //     next=NULL;
    // }
};

void printlist(node* temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
int main(){

    node* node1= new node();
    node* node2= new node();
    node* node3= new node();
    node* node4= new node();

    node1->data=2;
    node1->next= node2;
    node2->data=4;
    node2->next= node3;
    node3->data=6;
    node3->next= node4;
    node4->data=8;
    node4->next= NULL;

    printlist(node1);
            

return 0;
}