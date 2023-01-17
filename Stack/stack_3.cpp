#include<bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;


int main(){
    string s="prabal";
    
    stack<char> st;
    for(int i=0;i<s.length(); i++){
       // char ch= s[i];
        st.push(s[i]);
    }
    string ans="";
    while(!st.empty()){
       // char ch=st.top();
        ans.push_back(st.top());

        st.pop();
    }

    cout<<ans<<endl;
     
        cout<<endl;

        

return 0;
}