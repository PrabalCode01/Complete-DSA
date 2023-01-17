#include<bits/stdc++.h>
using namespace std;
#define ll int

    ll merge1(ll arr[], ll temp[], ll left, ll mid, ll right){
        ll i,j,k,cnt=0;
        i= left;
        j=mid;
        k= left;
        while(i<=mid-1 && j<= right){
            if(arr[i]<= arr[j]){
                temp[k]= arr[i];
                k++;
                i++;
            }
            else{
                temp[k]= arr[j];
                k++; j++;
                cnt += mid-i ; 
            }
        }
        while(i<= mid-1){
            temp[k]= arr[i];
            k++; i++;
        }
        while(j<= right){
            temp[k] = arr[j];
            k++; j++;
        }
        for(ll m= left; m<=right; m++){
            arr[m]= temp[m];
        }
        return cnt;
    }

    ll mergesort(ll arr[], ll temp[],ll left, ll right){
        ll cnt=0;
        if(left<right){
            ll mid = (left+right)/2;
        
        
        cnt += mergesort(arr, temp, left, mid);
        cnt += mergesort(arr, temp, mid+1, right);
        cnt += merge1(arr, temp, left, mid+1, right);
        }
        return cnt;
    }

int main(){
            ll n;
            cin>>n;
            ll arr[n];
            for(ll i=0; i<n; i++){
                cin>>arr[i];
            }
            ll temp[n];
            cout<<mergesort(arr,temp,0, n-1)<<endl;

            for(ll i=0; i<n; i++){
                cout<<temp[i]<<" ";
            }cout<<endl;

return 0;
}