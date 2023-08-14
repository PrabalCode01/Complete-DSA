#include<bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

bool dfs(int vertex, int parent, vector<int>adj[], bool vis[]){

    vis[vertex]=true;
    bool isLoopexist=false;

    for(auto child:adj[vertex]){
        if(vis[child] && child==parent) continue;
        if(vis[child]) return true;

        isLoopexist |= dfs(child,vertex, adj,vis);
    }
    return isLoopexist;
}


bool isCycle(int V, vector<int> adj[]){

bool vis[V]={0};

for(int i=0; i<V; i++){
    if(vis[i]) continue;

    if(dfs(i,0,adj,vis)) return true;
}

return false;

}

int main(){

    return 0;
}