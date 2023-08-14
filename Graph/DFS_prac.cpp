#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// in dfs-->depth first search , we go to the depth of a node and make all the visited node to 1 so that
//                               no need to iterate again on them. All depends on adjacency list



// recursive function
void dfs(int node, vector<int> adj[], int visited[], vector<int>&ans){

    visited[node]=1;
    ans.push_back(node);

    // traversing all its neighbours
    for(auto it: adj[node]){
        if(!visited[it]){
            dfs(it,adj, visited,ans);    // recursive call
        }
    }

}
vector<int>  dfs_graph(int V, vector<int> adj[]){
      // V is the no. of nodes

      int visited[V]={0};
      int start=0;

      vector<int> ans;
      dfs(start,adj,visited,ans);
      return;

}



int main(){
                // space complexity is O(N)+O(N)+O(N)--> O(N)

                // Time complexity is the summation of all the degrees of a node and for calling of the function
                // that is equal to 2* no. of edgres  ---> O(2*E) +O(N) , E = no. of edges 
    return 0;
}