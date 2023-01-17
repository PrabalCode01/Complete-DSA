#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(){
     int a,b;
     cin>>a>>b;
     int k=gcd(a,b);
     int i,count=0;
     int l=pow(k,0.5);
          for( i=1;i<=l;i++){
              if(k%i==0){count++;}
          }   
          i--;
          if(k==i*i){cout<<(2*(count)-1)<<endl;}
          else{cout<<2*count<<endl;} 

return 0;
}