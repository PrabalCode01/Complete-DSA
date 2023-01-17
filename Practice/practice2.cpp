#include<iostream>
using namespace std;

int peakelement(int arr[], int size){
            int s=0; 
            int e=size-1;
            int mid=s + (e-s)/2;

            while(s<e){
                if(arr[mid]<arr[mid+1]){
                    s=mid+1;
                }
                else{
                  e=mid;
                }
                mid=s+ (e-s)/2;
            }
            return s;

}
int main(){
            // peak element of mountain array
            int arr[7]={1,2,5,4,3,2,1};
            
            cout<<"Peak element of this mountain array is: "<<peakelement(arr, 7);
return 0;
}