#include<bits/stdc++.h>
#include<vector>
using namespace std;

void solve(string ip, string op, vector<string> &v){
    //base condition
    if(ip.length()==0){
        //cout<<op<<" ";
        v.push_back(op);
        return;
    }
    string op1= op;
    string op2= op;
     
    op2.push_back(ip[0]);
    ip.erase(ip.begin());

    solve(ip, op1,v);
    solve(ip,op2,v);

    return;

}

int main(){
            string ip;
            cin>>ip;

            string op="";
            cout<<"Null";
            vector<string> ans;
            solve(ip, op, ans);
            sort(ans.begin(), ans.end(), greater<string>());
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            // int arr[5]={2 , 5,6 ,8,1};
            // sort(arr,arr+5, greater<int>)
           

return 0;
}