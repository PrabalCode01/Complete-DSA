#include<bits/stdc++.h>
using namespace std;

int main(){
            int arr[10]={2,6,4,5};
            // cout<<"Address of first memeory block is : "<<arr<<endl;
            // cout<<"Address of first memeory block is : "<<&arr[0]<<endl;
            // cout<<"Address of first memeory block is : "<<&arr<<endl;
            
            // cout<<arr[0]<<endl;

            // cout<<"value: "<<*arr<<endl; 
            // cout<<"value: "<<*arr+1<<endl; 
            // cout<<"value: "<<*(arr + 1)<<endl; 
            // cout<<"value: "<<*(arr) + 1<<endl; 
            // cout<<"value: "<<arr[3]<<endl; 
            // cout<<"value: "<<*(arr+3)<<endl; 
            // cout<<"value: "<<*(3+arr)<<endl; 


            // now next::

            int temp[10]={1,23,4,5,7};
            // cout<<sizeof(temp)<<endl;
            // cout<<sizeof(*temp)<<endl;
            // cout<<sizeof(&temp)<<endl;

            // int *ptr= &temp[0];
            // cout<<sizeof(ptr)<<endl; 
            // cout<<sizeof(*ptr)<<endl;    // size of int is 4
            // cout<<sizeof(&ptr)<<endl; 

            // int *ptr= &temp[0];
            // cout<<&ptr<<endl; 
            // cout<<&(*ptr)<<endl; 
            // cout<<*(&ptr)<<endl; 


            int *ptr= &temp[0];
            cout<<ptr<<endl;
            ptr= ptr+1;
            cout<<ptr<<endl;
            cout<<*ptr<<endl;




return 0;
}