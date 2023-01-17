#include<bits/stdc++.h>
using namespace std;
                //  sorting checking with the help of recursion
   
   bool isSorted(int arr[], int size){

    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, size-1);
    }
   }

   int getsum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
  
    int sum=arr[0];
    sum= sum + getsum(arr+1, size-1);

    return sum;
   }


int main(){
    int arr[5]={2,10,10,10,10};

    int size= 5;
    

    bool ans= isSorted(arr, size);
    if(ans){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted "<<endl;
    }
    
    cout<<"The sum of the array is: "<<getsum(arr,size)<<endl;
            

return 0;
}