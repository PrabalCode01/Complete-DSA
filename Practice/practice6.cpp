#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
            int arr[5]={0,1,0,3,12};

            int nonzero=0;

            for(int i=0; i<5; i++){

                if(arr[i] != 0){
                    swap(arr[i], arr[nonzero]);
                    nonzero++;
                }
            }

            cout<<endl;
            for(int i=0; i<5; i++){
                cout<<arr[i]<<" ";
            }

cout<<endl;
return 0;
}