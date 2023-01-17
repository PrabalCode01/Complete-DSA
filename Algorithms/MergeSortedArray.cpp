    #include<bits/stdc++.h>
    using namespace std;

void merge(int arr1[], int n, int arr2[], int m , int arr3[]){
     int i=0, j=0 , k=0;

     while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]= arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
     }

     // copy first array k elements ko
     while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
     }


     // copy second array k elements ko
     while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
     }
    
}

void print(int ans[], int n){
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main(){
            int arr1[4]={1,3,4,5};
            int arr2[9]={1,2,3,4,5,6,7,8,9};
            int arr3[13];
            merge(arr1, 4 , arr2, 9, arr3);
            print(arr3,13);

return 0;
}