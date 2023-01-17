#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
      int arr[100];
      int size;

      heap(){
        arr[0]= -1;
        size=0;
      }

    void insert(int val){
        size= size+1;
        int index= size;
        arr[index]=val;

        while(index>1){
            int parent= index/2;

            if(arr[parent]< arr[index]){
                swap(arr[parent],arr[index]);
                index= parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;    
    }

    void deleteFrom_heap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return ;
        }

        arr[1]=arr[size];
        size--;

        int i=1;
        while(i<size){
            int left_in= 2*i;
            int right_in= 2*i + 1;
            if(left_in<size && arr[i]< arr[left_in]){
              swap(arr[i],arr[left_in]);
              i=left_in;
            }
           else if(right_in<size && arr[i]< arr[right_in]){
              swap(arr[i],arr[right_in]);
              i=right_in;
            }
            else{
                return;
            }
        }
    }

};

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFrom_heap();
    h.print();
            

return 0;
}