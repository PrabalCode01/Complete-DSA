#include<bits/stdc++.h>
using namespace std;
         // Implementation of stack

class Stack{
  public:
  int *arr;  // dynamically
  int top;
  int size;

  Stack(int size){
    this->size= size;
    arr = new int[size];
    top= -1;
  }

    
void push(int element){
    if(size-top>1){
        // top++;
        // arr[top]= element;
        arr[++top]=element;
    }
    else{
        cout<<"Stack Overflow "<<endl;
    }
}

// void push(int element){        // Similar Way
//     if(top==size){
//         cout<<"Stack Overflow "<<endl;
//         return;
//     }
// top++;
// arr[top]=element;
// }

void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack underflow "<<endl;
    }
}

int peek(){
    if(top>=0 && top<size)
        return arr[top];
    else{
        cout<<"Stack is empty"<<endl;
        return -1;
        }
    }


bool isEmpty(){
    // if(top==-1){
    //     return true;
    // }
    // else{
    //     return false;
    // }

    return (top==-1 ? 1 : 0);  //ternernary operator
}

};

int main(){
        
    Stack st(5);

        st.push(10);
        st.push(20);
        st.push(30);
         st.push(40);
        // st.push(50);

        cout<<st.peek()<<endl;

        st.pop();

        cout<<st.peek()<<endl;

        st.pop();

        cout<<st.peek()<<endl;

st.pop();
cout<<st.peek()<<endl;

if(st.isEmpty()){
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"Stack is not empty"<<endl;
}

return 0;
}