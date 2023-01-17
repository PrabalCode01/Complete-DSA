#include<bits/stdc++.h>
#include<queue>
using namespace std;

class stack{
    queue<int> q;

    public:

    void push(int data){
        int n= q.size();
        q.push(data);
        for(int  i=0; i<n; i++)[
            int value= q.front();
            q.pop();
            q.push(value); 
        ]
    }
}

int main(){

            

return 0;
}