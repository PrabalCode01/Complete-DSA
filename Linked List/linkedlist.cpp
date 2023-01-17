#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

// constructor
    node(int val){
        data= val;
        next= NULL;
    }
    // node(int data){
    //     this->data= data;
    //     this->next= NULL;
    // }
};

int main(){

    node* node1= new node(1);
            cout<<node1->data;
            cout<<node1->next<<endl;

return 0;
}