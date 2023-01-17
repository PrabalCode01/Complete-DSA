#include<bits/stdc++.h>
#include<vector>
using namespace std;




void heapify(vector<int>& arr, int n , int i){
    int largest=i;
    int left=2*i+1;
    int right= 2*i+2;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    
}

vector<int> merge_two_binary_heap(vector<int>& a, vector<int>& b){

    vector<int> ans;
  
    for(int i=0; i<4; i++){
        ans.push_back(a[i]);
    }
    for(int i=0; i<4; i++){
        ans.push_back(b[i]);
    }
    int size= ans.size();
    for(int i=size/2-1; i>=0; i--){
        heapify(ans,size,i);
    }
    return ans;
}

int main(){
    vector<int> a;
    vector<int> b;
    
   a.push_back(9);
   a.push_back(8);
   a.push_back(7);
   a.push_back(5);

   b.push_back(4);
   b.push_back(3);
   b.push_back(2);
   b.push_back(1);


 merge_two_binary_heap(a,b);
            

return 0;
}