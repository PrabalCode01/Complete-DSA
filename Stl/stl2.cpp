#include<bits/stdc++.h>
#include<vector>
using namespace std;
                            // vector
int main(){
    vector<int> v;

    // how to take number from user in vector
    
    // int x;
    // int n;  // size of vector
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cin>>x;
    //     v.push_back(x);
    // }

    vector<int> a(5,1);

    vector<int> last(a); // vector last has elements of a copied
    cout<<"print last "<<endl;
    for(int i: last){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size-> "<<v.capacity()<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    v.pop_back();
    for( int i: v){
        cout<<i<<" ";
    }cout<<endl;


    v.clear();
            

return 0;
}