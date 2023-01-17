#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int element){
    
    for(int i=0; i<size; i++){
        if(arr[i]==element){
           return i;
        }
    }
    return -1;
}

int main(){
            int arr[100]={1,2,4,5,6,7,8,9};
            for(int i=0; i<8; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
          cout<<"The index of the element is "<<linear_search(arr, 8, 11)<<endl;

return 0;
}