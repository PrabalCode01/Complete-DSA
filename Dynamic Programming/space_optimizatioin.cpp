#include<bits/stdc++.h>
using namespace std;

int main(){
            // fibonacci series in space optimising way

            int n;
            cin>>n;
            
            int prev1= 1;
            int prev2= 0;

            // if(n==0){  // if n can 0 also
            //     return 0;
            // }

            for(int i=2; i<=n; i++){
                int curr= prev1+prev2;
                prev2= prev1;
                prev1= curr;
            }
            
            cout<<prev1<<endl;           // time complexity  = O(n)
                                         // space complexity = O(1)


return 0;
}