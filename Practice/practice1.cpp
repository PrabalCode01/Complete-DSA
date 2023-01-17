#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int s=0; int e=size-1;
    int mid= s+( e-s)/2;
    int ans= -1;
    while(s<=e){
        if(arr[mid]== key){
            ans= mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+ (e-s)/2;

    } 
    return ans;
}


int lastOccurence(int arr[], int size, int key){
    int s=0; int e=size-1;
    int mid= s+( e-s)/2;
    int ans= -1;
    while(s<=e){
        if(arr[mid]== key){
            ans= mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+ (e-s)/2;

    } 
    return ans;
}
int main(){
            int even[5]={1,2,3,3,5};
cout<<"First occurrence of 3 is at index "<<firstOccurence(even, 5, 3)<<endl;
cout<<"Last occurrence of 3 is at index "<<lastOccurence(even, 5, 3)<<endl;

// total number of occurences of 3 

int total;
total= lastOccurence(even, 5, 3) - firstOccurence(even, 5, 3)  + 1;
cout<<"Total number of occurences of 3 is "<<total;
return 0;
}