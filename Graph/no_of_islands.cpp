#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& grid){
    

    int n= grid.size();
    int m= grid[0].size();
    vis[row][col]=1;
    queue<pair<int,int>> q;
    q.push({row,col});

    while(!q.empty()){
        int row= q.front().first;
        int col= q.front().second;
        q.pop();



        // traversing the neighbours and mark them 1  // using shortcut
        
        for(int delrow=-1; delrow<=1; delrow++){
            for(int delcol=-1; delcol<=1; delcol++){
             
             int nR= row+delrow;   // neighbour row
             int nC= col+delcol;   // neighbour colum

             if(nR>=0 && nR<n && nC>=0 && nC<m && grid[nR][nC]=='1' && !vis[nR][nC]){
                vis[nR][nC]=1;
                q.push({nR,nC})
             }

            }
        }



    }
}


int number_of_islands(vector<vector<char>>& grid ){

    int n= grid.size();
    int m= grid[0].size();

     // we'll make a 2d visited matrix 

     vector<vector<int>> vis(n,vector<int>(m,0));
    
    int cnt=0;

    for(int row=0; row<n; row++){

        for(int col=0; col<m; col++){

            if(!vis[row][col]  && grid[row][col]=='1'){
                cnt++;
                bfs(row,col,vis,grid);
            }
        }
    }
    return cnt;
}


int main(){


    return 0;
}