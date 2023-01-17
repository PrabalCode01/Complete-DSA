#include<bits/stdc++.h>
using namespace std;
                     // Binary search with the help of recursion
    bool binarySearch(int arr[], int s, int e, int key){
        //base case
        
        if(s>e){
            return false;
        } 
        int mid= s+ (e-s)/2;
        
        if(arr[mid]==key){
            return true;
        }
        

        if(arr[mid]<key){
            return binarySearch(arr, mid+1, e, key);
        }
        else{
            return binarySearch(arr, s, mid-1, key);
        }


    }

int main(){
    int arr[6]={2,4,6,8,10};
    int size=6;
    int key;
    cin>>key;

    int ans= binarySearch(arr, 0, 5,key);
    if(ans){
        cout<<key<<" is present in array"<<endl;
    }
    else{
        cout<<key<<" is not present in array"<<endl;
    }
            

return 0;
}