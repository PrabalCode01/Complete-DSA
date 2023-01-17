#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=5;
    int *ptr= &num;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    ptr++;
    cout<<ptr<<endl;
    num++;
    cout<<num<<endl;
    

return 0;
}