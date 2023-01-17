#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void deletion(int arr[], int size, int index){
    for(int i= index; i<size-1; i++){
        arr[i]=arr[i+1];
    }
}



int main(){
    int arr[100]={1,2,3,4,5,6,7,8};
    int siz=8; 
    int index=4;
    display(arr, siz);
    cout<<endl;
    deletion(arr, siz, index);
    siz=siz-1;  // because the new array has one less element
    display(arr,siz );
    cout<<endl;
            

return 0;
}