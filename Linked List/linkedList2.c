# include<stdio.h>
#include<stdlib.h>


//// **************** Insertion in Linked List   ************/////

struct node{
    int data;
    struct node * next;
};


void linkedlistTraversal(struct node* ptr){
    while(ptr != NULL)
{printf("Element : %d\n", ptr->data);
ptr= ptr->next;}
}
  // CASE 1
struct node * insertatFirst(struct node *head, int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next= head;
    ptr->data= data;
    return ptr;
}



//   CASE 2
struct node * insertatIndex(struct node*head, int data, int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=head;
    int i=0;
    while(i!=index-1){
    p=p->next;
    i++;
    }
    ptr->data=data;
    ptr->next= p->next;
    p->next= ptr;
    return head;
}


// CASE 3
struct node * insertatEnd(struct node *head, int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    
    ptr->data= data;
    struct node*p=head;
    while(p->next != NULL){
        p=p->next;
    }
    p->next= ptr;
    ptr->next=NULL;

    
    return head;
}


// CASE 4
struct node * insertAfternode(struct node*head, struct node *prevNode, int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    
    ptr->data= data;
    ptr->next= prevNode->next;
    prevNode->next=ptr;

    
    return head;
}


    int main(){

         struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    head=(struct node *) malloc(sizeof(struct node));
    second=(struct node *) malloc(sizeof(struct node));
    third=(struct node *) malloc(sizeof(struct node));
    fourth=(struct node *) malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second-> next = third;
    third->data = 45;
    third->next = fourth;
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");

    linkedlistTraversal(head);
    //  head= insertatFirst(head, 56);
    //  head  =  insertatIndex(head, 56, 1);
    //  head= insertatEnd(head, 56);

    head=insertAfternode(head, head, 41);
      printf("\nLinked list after insertion\n");
    linkedlistTraversal(head);

return 0;
}