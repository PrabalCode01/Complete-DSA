#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int element){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==element){
return mid;
        }

if(element>arr[mid]){
    start=mid+1;
}
else{
    end=mid+1;
}
     mid=start + (end-start)/2;

    }
    return -1;
}

int main(){
               int arr[8]={1,2,4,5,6,7,8,9};
            // for(int i=0; i<8; i++){
            //     cout<<arr[i]<<" ";
             
cout<<"The index of 8 is :"<<binarysearch(arr, 8, 8)<<endl;
return 0;
}