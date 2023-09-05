#include<bits/stdc++.h>
#include<set>
#include<queue>
#include<stack>
#include<vector>
using namespace std;


class DisjointSet{

    vector<int> rank,parent;

    public:

    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);

        for(int i=0; i<=n ; i++){
            parent[i]=i;
        }

    }

    int findUltimateParent(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findUltimateParent(parent[node]);
    }

    void unionByRank(int u,int v){
        int ul_parent_u = findUltimateParent(u);
        int ul_parent_v = findUltimateParent(v);

        if(ul_parent_u == ul_parent_v) return ;
        if(rank[ul_parent_u] < rank[ul_parent_v]){
            parent[ul_parent_u] = ul_parent_v;
        }
        else if(rank[ul_parent_u] > rank[ul_parent_v])
        {
            parent[ul_parent_v] = ul_parent_u;
        }
        else{
            parent[ul_parent_v] = ul_parent_u;
            rank[ul_parent_u]++;
        }
    }
};


int main(){

    DisjointSet ds(7);
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);

    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }


   ds.unionByRank(3,7);
     if(ds.findUltimateParent(3) == ds.findUltimateParent(7)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }


    return 0;
}