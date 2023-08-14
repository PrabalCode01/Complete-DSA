#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(int node, vector<int> adjList[], int visited[]){

    visited[node]=1;
    for(auto it: adjList[node]){
        if(!visited[it]){
            dfs(it,adjList, visited);
        }
    }
}


int num_provinces(vector<vector<int>> adj, int V){

    vector<int> adjList[];

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(adj[i][j]==1 && i!=j){
                adjList[i].push_back(j);
                adjList[j].push_back(i);
            }
        }
    }


    int vis[V]={0};
    int cnt=0;

    for(int i=0; i<V; i++){
        if(!vis[i]){
            cnt++;
            dfs(i,adjList,vis);
        }
    }

    return cnt;
}

int main(){

    return 0;
}