#include<iostream>
using namespace std;
int linearSearch(int arr[],int  n , int  k){
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            return i;
        }
      
    }
return -1;
}



int main(){
    
    int arr[]={1,2,3,4,5,7,8,9,4,5,6,7,8,9,97,4};
     int n = sizeof(arr)/sizeof(arr[0]);
 
    int k;
    cin>>k;

    
    int index=linearSearch(arr, n,k );
    cout<<index<<endl;
           

return 0;
}