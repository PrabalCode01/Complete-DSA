#include<iostream>
using namespace std;


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

int main(){
            int arr[5]={3,8, 10,17,1};
            cout<<"Pivot Index is "<<getpivot(arr,5)<<endl;
            cout<<" Pivot is "<<arr[getpivot(arr, 5)];

return 0;
}