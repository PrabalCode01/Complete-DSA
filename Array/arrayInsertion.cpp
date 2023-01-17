#include<iostream>
using namespace std;

int* insert(int arr[], int n, int element, int pos){
    n++;
    for(int i=n; i>=pos; i--){
        arr[i]=arr[i-1];

       
        
    } 
    arr[pos-1]=element;
return arr;
}

int main(){

int arr[100]={1,2,3,4,5,6,7};
int n=7;
int x,pos;
for(int i=0; i<7; i++){
    cout<<arr[i]<<" ";
}
            cout<<endl;
            x=30;
            pos=4;

    insert(arr, n, x, pos);
    for(int i=0; i<7; i++){
    cout<<arr[i]<<" ";
}

return 0;
}