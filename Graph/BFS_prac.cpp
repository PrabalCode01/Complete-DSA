#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class solution{
    public:

    vector<int> BFS_of_Graph(int V, vector<int> adj[]){
        int visited[n]={0};
        visited[0]=1;
        
        queue<int> q;
        q.push(0);
        vector<int> ans;

        while(!q.empty()){
            int node= q.front();
            q.pop();

            ans.push_back(node);

            for(auto it: adj[node]){
                if(visited[it]==0){
                    visited[it]=1;
                    q.push(it);
                }
            }
        }
      
      return ans; 
    }
};


// time complexity
// O(n)+ O(total no. of degrees= 2* no. of edges) ----> O(n)+O(2*E)

int main(){
    return 0;
}