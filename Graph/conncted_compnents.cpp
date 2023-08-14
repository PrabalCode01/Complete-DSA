#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

const int N = 1e5+7;
vector<int> g[N];
bool vis[N];

vector<vector<int>> connected_comp;
vector<int> current_comp;


void dfs(int vertex){

    vis[vertex]=true;
    current_comp.push_back(vertex);
    for(int it:g[vertex]){
        if(vis[it]) continue;

        dfs(it);
    }
}

int main(){
     
     int n,e;
     cin>>n>>e;
     for(int i=0; i<e; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
     }


     int cnt=0;
     for(int i=1; i<=n; i++){
        if(vis[i]) continue;
        current_comp.clear();
        dfs(i);
        connected_comp.push_back(current_comp);
        cnt++;
     }

     cout<<cnt<<endl;

     for(auto cc : connected_comp){
        for(auto ver: cc){
            cout<<ver<<" ";
        }
        cout<<endl;
        
     }
   
    return 0;
}