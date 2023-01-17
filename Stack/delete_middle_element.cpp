#include<bits/stdc++.h>
#include<stack>
using namespace std;

void solve(stack<int> &st, int count, int size){

    if(count==size/2){
        st.pop();
        return;
    }

    int num= st.top();
    st.pop();

    //recursive call
    solve(st,count+1, size);

    st.push(num);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(7);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(9);
    int count=0;
    solve(st,count,6);
  
    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
    st.pop();
    cout<<st.top()<<" ";
    st.pop();
    cout<<endl;
    

            

return 0;
}