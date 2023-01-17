#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void reversArray(int arr[], int n){
    int s=0;
    int e= n-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main(){
    int n;
     cin>>n;

            int arr[n];
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            cout<<endl;
            reversArray(arr, n);
cout<<"Reversed Array: "<<endl;
 for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }



return 0;
}