#include<bits/stdc++.h>
using namespace std;

void update(int **p2){
    //p2=p2+1;
    // kuch change hoga? --> NO

     //*p2= *p2 +1;
    // kuch change hoga? --> YES
    
      **p2 = **p2 +1;
    // kuch change hoga? --> YES
}

int main(){
            int i=5;
            int* p= &i;     // single pointer
            int** p2= &p;  // double pointer

  
            // cout<<"address of p: "<<&i<<endl;
            // cout<<"printing p: "<<*p2<<endl;
            // cout<<"printing p: "<<p<<endl;
            
            // cout<<"address of p: "<<p2<<endl;
            // cout<<"address of p: "<<&p<<endl;

            // cout<<"value of i: "<<*p<<endl;
            // cout<<"value of i: "<<*(*p2)<<endl;

            cout<<endl;
            cout<<"before: "<<i<<endl; 
            cout<<"before: "<<p<<endl; 
            cout<<"before: "<<p2<<endl; 
        update(p2); 
            cout<<endl;
            cout<<"after: "<<i<<endl; 
            cout<<"after: "<<p<<endl; 
            cout<<"after: "<<p2<<endl; 
            

return 0;
}