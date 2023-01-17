#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    // place pivot at right position
    int pivotIndex= s+cnt;
    swap(arr[pivotIndex], arr[s]);
    
    int i=s, j=e;

    while(i<pivotIndex && j>pivotIndex){
    while(arr[i]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<pivotIndex && j > pivotIndex){
        swap(arr[i++], arr[j--]);
    }
    }
    return pivotIndex;

}
void quicksort(int arr[], int s, int e){
    if(s>=e){
        return ;
    }
    int p= partition(arr,s,e);

    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);

}

int main(){
            int arr[10]={2,4,1,6,2,3,5,8,6,9};
            int n=10;
             quicksort(arr,0,n-1);

            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";

            }cout<<endl;

return 0;
}