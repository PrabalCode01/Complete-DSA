#include<bits/stdc++.h>
using namespace std;

#define pi 3.14

inline int getmax(int& a, int& b){
return (a>b) ? a: b;
}

int main(){
            // int r=5;
            // double area= pi *r*r;
            // cout<<"Area is : "<<area<<endl;

            int a=5, b=4;
            cout<<getmax(a,b)<<endl;

return 0;
}