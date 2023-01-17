#include<bits/stdc++.h>
using namespace std;
 ///                  Linear search by Recursion
bool search(int arr[], int key, int size){
    if(size==0){
        return false;
    }
    
    if(arr[0]==key){
        return true;
    }
else{
    return search(arr+1, key, size-1);
}
}
 
int main(){

    int arr[5]={2,4,5,7,8};
    int size=5;
    int key;
    cin>>key;

    bool ans= search(arr, key, size);

    cout<<ans<<endl;
            

return 0;
}