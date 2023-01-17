
3#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[], int n, int key)
            {
            int s=0;
            int e= n-1;
            int mid;
            
            mid= s+ (e-s)/2;
        while(s<=e){
            if(a[mid]==key){
                return mid;

            }
            if(key>a[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        mid= s+ (e-s)/2;
        }
        return -1;
        }

int main(){
    int a[6]= {1,2,4,6,7,9};
            // int n;
            // cin>>n;
            int key;
            cin>>key;
cout<<endl;
cout<<" The index of key element is "<<binarysearch(a,6,9)<<endl;
return 0;

}