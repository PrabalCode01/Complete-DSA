#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n){

    int k = arr[0];   // here k is the size of the count array that we create
    for(int i=0; i<n; i++){
        k= max(k,arr[i]);
    }

int count[13]={0};
    // for(int i=0; i<k; i++){
    //     count[i]=0;
    // }
    for(int i=0; i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1; i<=k; i++){
        count[i]= count[i]+count[i-1];
    }
    int res[n];   // resulting sorted array

    for(int i=n-1; i>=0; i--){
        res[count[arr[i]]-1]= arr[i];
        count[arr[i]]--;
    }

    for(int i=0;i<n; i++){
        arr[i]=res[i];
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
  int n = 7;
  int arr[] = {1,2,5,6,12,3,4}; 
  count_sort(arr, n);

return 0;
}