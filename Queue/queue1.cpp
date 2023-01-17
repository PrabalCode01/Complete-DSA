#include<bits/stdc++.h>
using namespace std;


//  enqueue(x)---> it pushes element at back of a queue
//  dequeue(x)---> it removes element from front of a queue


// #define n 20

        // implementation of queue by array
class Queue{
    public:
    int* arr;
    int front;
    int back;
    int n;

    Queue(int n){
        this->n=n;
        arr= new int[n];
        front= -1;
        back= -1;
    }

    void push(int x){
        if(back==n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1){  // only case when we add first element too the queue
            front++;
        }
    }

    void pop(){
        if(front==-1 || front>back){
          cout<<"No element in queue"<<endl;
          return;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
          cout<<"No element in queue"<<endl;
          return -1;
        }
    return arr[front];
}


   bool empty(){
        if(front==-1 || front>back){
         return true;
        }
return false;
   }


};


int main(){
           Queue q(4);
           q.push(1);
           q.push(2);
           q.push(3);
           q.push(4);

           cout<<q.peek()<<endl;
           q.pop();
           cout<<q.peek()<<endl;
           q.pop();
           cout<<q.peek()<<endl;
           q.pop();
           cout<<q.peek()<<endl;
           q.pop();
        
cout<<q.empty()<<endl;

return 0;
}