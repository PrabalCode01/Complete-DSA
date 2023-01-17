#include<bits/stdc++.h>
using namespace std;
#include<queue>

int kth_element(int arr[], int n, int k){
    
    priority_queue<int> pq;

    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }

    for(int i=k; i<n; i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans= pq.top();
    return ans;

}

int main(){
    int arr[6]= {2,6,9,4,5,10};
    int n=6;
    int k=4;
    cout<<kth_element(arr,n,k)<<endl;
            

return 0;
}