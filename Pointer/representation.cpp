#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



int main(){

    // adjacency list which gives the input of graph

    int n,m;
    cin>>n>>m;
    unordered_map<int,list<int> adj;

    for(int i=0; i<m; i++){
        
        // this is for undirected graph

        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
       


        // for directed graph
        // there is only u---->v

        adj[u].push_back(v);
    //  adj[v].push_back(u); // this will not used
    }
    return 0;
}