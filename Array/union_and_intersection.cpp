#include<bits/stdc++.h>
using namespace std;

void printUnion(int a[], int n, int b[], int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else if(b[j]<a[i]){
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
            i++;
        }
}

    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<b[j]<<" ";
        j++;
    }
}

int main(){
            int n; cin>>n;
            int a[n];
            for(int i=0; i<n; i++){
                cin>>a[i];
            }
            int m; cin>>m;
            int b[m];
            for(int i=0; i<m; i++){
                cin>>b[i];
            }

    printUnion(a,n,b,m);
    cout<<endl;


return 0;
}