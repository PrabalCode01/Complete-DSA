#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//  if we have given adjacency matrix and want to make adjacency list--->


void solve( vector<vector<int>> adjMat, int V){

    vector<int> adjList[];

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            
            if(adjMat[i][j]==1  && i!=j){
                adjList[i].push_back(j);
                adjList[j].push_back(i); 
            }
        }
    }
   

    // in this way our adjacency list is ready---> adjList[]

}

int main(){

    return 0;
}