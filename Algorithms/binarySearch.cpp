#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end= size-1;
   // int mid=(start+end)/2; it can create problem at one point

   int mid= start+ (end-start)/2;


    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        // go to right side of array
        if(key> arr[mid]){
            start=mid+1;}
            else{
                end=mid-1;
            }
             mid= start+ (end-start)/2;

        
    }
    return -1;
}

int main(){
            int even[6]={2,4,6,8,14,18};
            int odd[5]={3,5,7,14,16}; 

            int index=binarySearch(even, 6, 14);
            cout<<"Index of 14 is "<<index<<endl;
            int oddindex=binarySearch(odd, 5, 5);
            cout<<"Index of 5 is "<<oddindex<<endl;

return 0;
}