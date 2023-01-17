#include<bits/stdc++.h>
#include<map>
using namespace std;
  // MAP
int main(){
            map<int, string> m;
            m[1]="prabal";
            m[2]="pratap";
            m[3]="singh";
        m.insert({5,"hello"});

cout<<"before erase"<<endl;
            for(auto i: m){
                cout<<i.first<<"- "<<i.second<<endl;
            }
            cout<<"finding 13->  "<<m.count(13)<<endl;

            // m.erase(3);
            // m.erase(2);

            for(auto i: m){
                cout<<i.first<<"- "<<i.second<<endl;
            }

            auto it= m.find(2);
            for(auto i= it; i!=m.end(); i++){
                cout<<(*i).first<<" "<<(*i).second<<endl;
            }

return 0;
}