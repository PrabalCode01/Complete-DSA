#include<bits/stdc++.h>
using namespace std;


// to find square root using binary search
// square root of a number always lie between 0 and that number 
// so we can use binary search

int binarysearch(int n){
    int s=0; 
    int e= n;
long long int mid= s+(e-s)/2;
long long int ans=-1;
while(s<=e){
    long long int square= mid*mid;

    if(square== n){
        return mid;
    }

    if(square<n){
       ans= mid;
       s= mid+1;
    }
    else{
        e= mid-1;
    }
    mid= s+(e-s)/2;
}
return ans;
}


double floatpartofsqrt(int n, int precision, int tempsol){
double factor=1;
double ans= tempsol;
for(int i=0;i<precision; i++){
    factor= factor/10;
    for(double j=0; j*j<n; j= j+ factor){
        ans=j;
    }
}
return ans;
}

int main(){
    int n;
    cout<<"enter the value : " ;
    cin>>n;
int tempsol= binarysearch(n);
cout<<"answer is "<< floatpartofsqrt(n,3,tempsol)<<endl;
  //  cout<<binarysearch(n);
            

return 0;
}