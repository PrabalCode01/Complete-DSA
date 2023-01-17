# include<stdio.h>
#include<stdlib.h>


////        ***********   Traversal in Linked list           ************* ////////////

struct node{
    int data;
    struct node * next;
};

void linkedlistTraversal(struct node* ptr){
    while(ptr != NULL)
{printf("Element : %d\n", ptr->data);
ptr= ptr->next;}
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

    linkedlistTraversal(head);
return 0;
}