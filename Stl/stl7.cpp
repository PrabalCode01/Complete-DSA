#include<bits/stdc++.h>
#include<set>
using namespace std;
    //             SET
int main(){
         set<int> s;
         s.insert(5);   
         s.insert(4);   
         s.insert(6);
         s.insert(7);
         s.insert(2);
         s.insert(10);

         for(int i: s){
            cout<<i<<endl;
         }

         set<int> :: iterator it= s.begin();
         it++;

         s.erase(it);
         for(int i: s){
            cout<<i<<endl;
         }

         cout<<" present or not "<<s.count(5)<<endl;

set<int> :: iterator itr= s.find(5);

for( auto it= itr; it!= s.end(); it++){
    cout<<*it<<" ";
}

return 0;
}