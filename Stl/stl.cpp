#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

     for(int i:d){
        cout<<i<<" ";
     }    

    //  d.pop_back();
    //d.pop_front();
     cout<<endl;
       for(int i:d){
        cout<<i<<" ";
     }    

     cout<<endl<<d.at(1)<<endl;
cout<<endl;

cout<<"front"<<d.front()<<endl;
cout<<"back"<<d.back()<<endl;

cout<<"empty or not"<<d.empty()<<endl;

cout<<d.size()<<endl;
d.erase(d.begin(), d.begin()+1);

return 0;
}