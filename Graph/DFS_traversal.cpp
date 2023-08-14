#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
#include<list>
#include<queue>
using namespace std;


// preparing adjacency list
void prepare_adjList(un<int,list<int>>&adjList, vector<pair<int,int>>&edges){
    for(int i=0; i<edges.size(); i++){
        int u= edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

vector DFS(int v, int e, )
int main(){
            

return 0;
}