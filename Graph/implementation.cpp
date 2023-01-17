#include<bits/stdc++.h>
#include<unordered_map>
#include<list>  
using namespace std;

class graph{
    public:


    //adjacency list
    unordered_map<int, list<int>> adj;

    void add_edge(int u,int v,bool direction){
        //direction=0 -->undirected graph
        //direction=1 -->directed graph

        //create an edge from u to v
        adj[u].push_back(v);    

        if(direction==0){
            adj[v].push_back(u);
        }

    }

    void print_list(){
        for(auto i: adj){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
            int n;
            cout<<"Enter the number of nodes: ";
            cin>>n;

            int m;
            cout<<"Enter the number of edges: ";
            cin>>m;

            graph g;

            for(int i=0; i<m; i++){
                int u,v;
                cin>>u>>v;
               
               //creating a undirected graph
               g.add_edge(u,v,0);
            }

            //printing the graph
            g.print_list();

return 0;
}