#include<bits/stdc++.h>
#include<queue>
using namespace std;
                 // QUEUE--> First in first out
int main(){

           queue<string> q;
           q.push("prabal"); 
           q.push("pratap"); 
           q.push("singh"); 
        cout<<"Size: "<<q.size()<<endl;
           cout<<"First element "<<q.front()<<endl;
           
           q.pop();
           cout<<"First element "<<q.front()<<endl;
        cout<<"Size: "<<q.size()<<endl;


return 0;
}