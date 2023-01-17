#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node* next;
};

node* top;

void push(int data){
    node* temp= new node();
    if(!temp){
        cout<<" stack overflow"<<endl;
        return;
    }
    temp->data = data;
    temp->next = top;
    top = temp;
}

bool is_empty(){
     return top==NULL;
}

void peek_element(){
    if(!is_empty()){
     cout<<top->data<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}


int main(){
            

return 0;
}