#include<bits/stdc++.h>
using namespace std;        // Dynamic Memory Allocation


int getsum(int *arr , int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    // char ch='q';
    // cout<<sizeof(ch)<<endl;

    // char* c= &ch;
    // cout<<sizeof(c)<<endl;
            

    int n;
    cin>>n;

    // variable size array
    int* arr= new int[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans= getsum(arr,n);
    cout<<"ans is : "<<ans<<endl;

return 0;
}