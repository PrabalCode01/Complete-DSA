#include<bits/stdc++.h>

using namespace std;
// SELECTION SORT>
void selectionsort( int arr[], int n){

for(int i=0; i<n-1; i++){
    int minIndex=i;

    for(int j=i+1; j<n; j++){

        if(arr[j]< arr[minIndex])
            minIndex=j;
        
    }
    swap(arr[minIndex], arr[i]);

}
}
int main(){
    int n=5;
    
    int arr[5]={64,25,12,22,11};
    selectionsort(arr,5);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }





return 0;
}