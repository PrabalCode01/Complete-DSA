#include<bits/stdc++.h>
using namespace std;

vector<string> powerset(string s){
    int n= s.length();
    vector<string>ans;

    for(int i=0; i< (1<<n); i++){
        string sub="";
        for(int j=0; j<n; j++){
            if(i & (1 << j)){
                sub += s[j];
            }
        }
        if(sub.length() > 0){
            ans.push_back(sub);
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    string s= "122";
    
    vector<string> ans = powerset(s);
    cout<<"power set of the set: "<<endl;



for(auto it: ans){
    cout<<it<<" ";
}
cout<<endl;


    
    
        

return 0;
}