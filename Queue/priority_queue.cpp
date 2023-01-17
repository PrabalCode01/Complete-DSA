#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(10);
    pq.push(5);
    pq.push(8);

    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    cout<<pq.empty()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;
    cout<<pq.empty()<<endl;

    
    
            

return 0;
}