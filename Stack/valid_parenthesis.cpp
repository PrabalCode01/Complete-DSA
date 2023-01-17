#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for(auto i: s){
        if(st.empty() || i=='('  || i=='[' || i=='{' ){
            st.push(i);
        }
        else{
            if((i==')' && st.top()!='(') || (i==']' && st.top()!='[')||(i=='}' && st.top()!='{') ){
                return false;
            }
             st.pop();
        }


    }
    return st.empty();
}



int main(){
    string s;
    cin>>s;
    if(isValid(s)){
        cout<<"It is valid string "<<endl;
    }
    else{
        cout<<"It is not valid "<<endl;
    }
            

return 0;
}