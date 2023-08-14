#include<bits/stdc++.h>
#include<set>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

// finding the sortest path in a binary matrix

// Use BFS approach to find shortest path like we solve for graph problems. 
// You can think of adjacent cells with value = 0 having an undirected edge between them.
// Apply BFS and update counter at everly level.
// To track levels I have used nodesPushed. 
// It is equal to number of nodes in current level.
// If you are able to reach (n-1, n-1) return its level otherwise return -1.
// Little Optimization : Rather than keeping visited vector, after we have pushed
// a node in the queue make its value in grid equal to 1. 
// This would make it unavailable to process next time we encounter it.
// However this method will corrupt the memory.
// DP will not work here because the way we traverse the matrix in DP will not lead
// to formulation of correct solution or rather the optimal path. 
// However, BFS will lead to an optimal path.
// We can also get our answer by DFS but it would be computationaly more expensive 
// and might give TLE on large inputs.


bool isValid(vector<vector<int>> &grid, int i,int j,int n,vector<vector<bool>&vis){
    return (i>=0 && i<n && j>=0 &&j<n && grid[i][j]==0 && !vis[i][j]);
}

int sortest_path_in_binary_path(vector<vector<int>>& grid){
    int n= grid.size();

    vector<vector<bool>> vis(n,vector<bool>(n , false));

    queue<pair<int,int>> q;
    int ans=0;
    int nodespushed;

    if(grid[0][0]==0){
        q.push({0,0});
        vis[0][0]=true;
    }

    while(!q.empty()){
        nodespushed =q.size();
        ans++

        for(int i=0; i<nodespushed; i++){
             pair<int, int> frontNode = q.front();

             q.pop();
                int i = frontNode.first, j = frontNode.second;

                if(i==n-1 and j==n-1) return ans;

                for(int k = i - 1; k <= i + 1 ; k++){
                    for(int l = j - 1; l <= j + 1; l++){
                        if(isValid(grid, k, l, n, visited)){
                            q.push({k, l});
                            visited[k][l] = true;
                        }
                    }
                }   
        }   

        
    }
    return -1;
}



int main(){

    return 0;
}