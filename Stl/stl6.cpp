#include<bits/stdc++.h>
#include<queue>
using namespace std;
                      // Priority queue
int main(){
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(5);
    maxi.push(3);
    maxi.push(4);

    int n= maxi.size();  // becoz maxi ka size change nahi hona chaiye
                        // we have to run the loop for 4 times
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }        
    cout<<endl;


    maxi.push(5);
    maxi.push(2);
    maxi.push(8);
    maxi.push(1);

    int m= maxi.size();  
                        
    for(int i=0; i<m; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }        
    cout<<endl;

    cout<<"Empty or not: "<<mini.empty()<<endl;  // we have popped up all elements

return 0;
}