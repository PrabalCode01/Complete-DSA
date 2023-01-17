#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){
            deque<int> dq;
            dq.push_back(1);
            dq.push_front(2);
            dq.push_front(3);
            dq.push_front(4);
            dq.push_back(5);

            for(auto i: dq){
                cout<<i<<" ";
                cout<<endl;
            }

            dq.pop_back();
            dq.pop_front();

            cout<<dq.size()<<endl;


return 0;
}