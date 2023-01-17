#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
int n; 
cout<<"enter the value of n: "<<endl;
cin>>n;

    int a= binary_search(v.begin(), v.end(), n);
    if(a==1){
        cout<<n<<" is present "<<endl;
    }
    else{
        cout<<n<<" is not present "<<endl;
    }

 int   j=4;
  int  b=6;
    cout<<"max : "<<max(j,b)<<endl;
    cout<<"min : "<<min(j,b)<<endl;

swap(j,b);
cout<<j<<endl;


string s= "abcd";
reverse(s.begin(), s.end());
cout<<s<<endl;

rotate(v.begin(), v.begin()+1, v.end());
cout<<"after rotate: "<<endl;
for(int i:v){
    cout<<i<<" ";
}

return 0;
}