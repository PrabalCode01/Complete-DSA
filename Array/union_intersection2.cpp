#include<bits/stdc++.h>
using namespace std;

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

            vector<int> v;

            int i=0, j=0;
            while(i<n || j<m){

                    while(i>0 && i<n && a[i]==a[i-1]){
                        i++;
                    }
                    while(j>0 && j<m && b[j]==b[j-1]){
                        j++;
                    }

            if(j>=m){
                v.push_back(a[i]);
                i++;
                continue;
            }
            if(i>=n){
                v.push_back(b[j]);
                j++;
                continue;
            }

            if(a[i]<b[j]){
                v.push_back(a[i]);
                i++;
            }
            else if(a[i]>b[j]){
                v.push_back(b[j]);
                j++;
            }
            else{
                v.push_back(a[i]);
                i++;
                j++;
            }
            }

            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }

return 0;
}