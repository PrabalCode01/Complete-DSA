#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

int getlength(node* head){
    int len=0;
    while(head != NULL){
        len++;
        head= head->next;
    }
    return len;
}


int main(){
    int ans= getlength(head);
    int res= (ans/2)+1;
    return res;
            


return 0;
}