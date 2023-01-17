#include<bits/stdc++.h>
#include<stack>
using namespace std;
                    //  STACK ---> first in last out  (FILO)
int main(){
//     stack<string> s;
//     s.push("Prabal");
//     s.push("Pratap");
//     s.push("Singh");
        
// cout<<"size of stack= "<<s.size()<<endl;
//         cout<<"top element: "<<s.top()<<endl;
       
//         s.pop();
//  cout<<"top element: "<<s.top()<<endl;

// cout<<"size of stack= "<<s.size();

// cout<<endl<<"Empty or not "<<s.empty()<<endl;


stack <int> st;
st.push(2);
st.push(5);
st.push(4);
st.push(6);

cout<<st.top()<<endl;
cout<<st.size()<<endl;
st.pop();

cout<<st.top()<<endl;

cout<<st.size()<<endl;
cout<<st.empty()<<endl;
st.pop();
st.pop();
st.pop();
cout<<st.empty()<<endl;
return 0;
}