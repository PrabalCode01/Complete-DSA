#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> pq; // works as a max heap

    pq.push(30);
    pq.push(70);
    pq.push(45);
    pq.push(50);
    pq.push(80);

    cout<<"size of queue: "<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<"size of queue: "<<pq.size()<<endl;
    

    cout<<pq.empty()<<endl;


    // making a min heap

    priority_queue<int, vector<int>,greater<int> >  min_pq;
    min_pq.push(30);
    min_pq.push(70);
    min_pq.push(45);
    min_pq.push(50);
    min_pq.push(80);

    cout<<"size of queue: "<<min_pq.size()<<endl;
    cout<<min_pq.top()<<endl;
    min_pq.pop();
    cout<<min_pq.top()<<endl;
    min_pq.pop();
    cout<<min_pq.top()<<endl;
    min_pq.pop();
    cout<<"size of queue: "<<min_pq.size()<<endl;
    

    cout<<min_pq.empty()<<endl;


            

return 0;
}