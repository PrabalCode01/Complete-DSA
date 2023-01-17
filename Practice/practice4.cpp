#include<iostream>
using namespace std;
// checking whether a element present or not

// get pivot point
int getpivot(int arr[], int n){
    int s=0; 
    int e=n-1;
    int mid=s+ (e-s)/2;

    while(s<e){
        if(arr[mid]>= arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;

    }
    return s;
}

int binarySearch(int arr[], int s , int e, int key){
    int start=s;
    int end= e;
   // int mid=(start+end)/2; it can create problem at one point

   int mid= s+ (end-s)/2;


    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        // go to right side of array
        if(key> arr[mid]){
            s=mid+1;}
            else{
                end=mid-1;
            }
             mid= s+ (e-s)/2;

        
    }
    return -1;


}

int findposition(int arr[], int n, int k)
{
    int pivot=getpivot(arr, n);
    if(k>=arr[pivot] && k <=arr[n-1])
    {
        return binarySearch(arr, pivot, n-1, k);    
}
else{
    return binarySearch(arr, 0, pivot-1, k);
}
}

int main(){
            int arr[5]={2,3,6,4,1};
            cout<<findposition(arr, 5, 4 );

return 0;
}