#include<bits/stdc++.h>
using namespace std;
 //                      Merge sorting using recursion
 
 void merge(int *arr, int s, int e){
    int mid=(s+e)/2;

    int len1= mid-s+1;
    int len2= e-mid;
    

    int *first= new int[len1];
    int *second= new int[len2];
    
    //copy values
    int mainArrayindex=s;
    for(int i=0; i<len1; i++){
        first[i]=arr[mainArrayindex];
        mainArrayindex++;
    }

    mainArrayindex= mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[mainArrayindex];
        mainArrayindex++;
    }

    //merge two sorted array
    int index1=0;
    int index2=0;
    mainArrayindex=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayindex++]= first[index1++];
        }
        else{
            arr[mainArrayindex++]= second[index2++];

        }
    }
    while(index1<len1){
            arr[mainArrayindex++]= first[index1++];
    }
    while(index2<len2){
            arr[mainArrayindex++]= second[index2++];
    }

    delete []first;
    delete []second;
 }


 void mergesort(int *arr, int s, int e){
    if(s>=e){
        return ;
    }
    int mid= (s+e)/2;

    mergesort(arr,s,mid);  // left part sort karna hai

    mergesort(arr,mid+1,e);  // right part sort karna hai

    //merge
    merge(arr,s,e);

 }
int main(){
            int arr[15]={3,4,4,1,5,8,3,2,34,66,87,23,22,12,45};
            int n=15;

            mergesort(arr,0,n-1);

            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";

            }cout<<endl;


return 0;
}