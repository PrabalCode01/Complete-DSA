#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
#include<list>
#include<queue>
using namespace std;

#define un unordered_map

// preparing adjacency list
void prepare_adjList(un<int,list<int>>&adjList, vector<pair<int,int>>&edges){
    for(int i=0; i<edges.size(); i++){
        int u= edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

// printing adjacency list

void printAdjList(un<int , list<int>>& adjList){
    for(auto i: adjList){
        cout<<i.first<<"->";
        for(auto j = i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void bfs(un<int, list<int>>& adjList, un<int, bool>&visited, vector<int>&ans, int node){
    queue<int> q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);
        for(auto i : adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int,int>>edges){
    un<int,list<int>>adjList;
    vector<int> ans;
    un<int,bool> visited;
    prepare_adjList(adjList, edges);
    for(int i=0; i<vertex, i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
       
    }
    return ans;
}


int main(){

            

return 0;
}