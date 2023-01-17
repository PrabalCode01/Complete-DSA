#include<bits/stdc++.h>
#include<stack>
using namespace std;

void sorted_insert(stack<int>& st, int num){

    if(st.empty() || (!st.empty() && st.top() < num)){
        st.push(num);
        return;
    }
    int n= st.top();
    st.pop();

    sorted_insert(st,num);

    st.push(n);

}


void sort_stack(stack<int>& st){

    if(st.empty()){
    return;
    }

    int num= st.top();
    st.pop();

    sort_stack(st); // recursive call

    sorted_insert(st,num);


}


int main(){
stack<int> st;
            st.push(-1);
            st.push(2);
            st.push(-3);
            st.push(4);
            st.push(-5);
             

return 0;
}