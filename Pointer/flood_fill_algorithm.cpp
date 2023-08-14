#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int newcolor,int ini,int delrow[],int delcol[]){
    

    int n= image.size();
    int m= image[0].size();
    ans[row][col]=newcolor;

    for(int i=0; i<4; i++){
        
        int nrow=row+delrow[i];
        int ncol= col+delcol[i];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==ini && ans[nrow][ncol]!=newcolor){
            dfs(nrow,ncol,ans,image,newcolor,ini,delrow,delcol);
        }

    }


}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor){

    int inicolor= image[sr][sc];

    vector<vector<int>> ans= image;

    int delrow[]={-1,0,+1,0};
    int delcol[]={0,+1,0,-1};



    dfs(sr,sc,ans,image,newcolor,inicolor,delrow,delcol);

    return ans;
}


int main(){


    return 0;
}