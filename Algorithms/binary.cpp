#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int element){
    int s=0;                                         // O(log n)
    int e=n-1;
    int mid= (e+s)/2;

    while(s<=e){
        if(arr[mid]==element){
            return  mid;
        }

        if(arr[mid]>element){
            e= mid-1;
        }
        else{
            s=mid+1;
        }
        mid= (e+s)/2;
        

    }
    return -1;
}

int main(){
    int arm[9]={1,2,3,4,5,6,7,8,9};
    int a;
    cin>>a;
    cout<<endl;
    cout<<"The index of "<<a<<" is "<<binarysearch(arm, 9, a);
            

return 0;
}