#include<bits/stdc++.h>
using namespace std;

int fastExponent(int x, int n){
    int res=1;
    while(n>0){
        if(n&1){
            // odd
            res= res*x;

        }
        x= x*x;
        n= n>>1;
       

    }
    return res;
}

int main(){
    cout<<fastExponent(2,6)<<endl;   // TC --> O(log n)
            

return 0;
}