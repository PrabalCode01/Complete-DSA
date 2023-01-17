#include<bits/stdc++.h>
#include<list>
using namespace std;
           //                       LIST
int main(){
    list<int> l;
 
    cout<<endl;
    list <int> n(5,100);
    for(int i: n){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);
    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<endl<<l.size()<<endl;
            

return 0;
}