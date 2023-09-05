#include<bits/stdc++.h>
#include<set>
#include<queue>
#include<stack>
#include<vector>
using namespace std;




int bfs(string s1,string s2){
  
}


int main(){
            // we will be given starting and ending point of a chess board
            // we have to find the minimum jumps knight will do to reach ending point 

            // so we have to find shortest path for knight in the chess board
            // so we do bfs and find the level for ending point
     

     int  n;
     cin>>n;
     while(n--){
        string s1,s2;   // starting and ending point in string form like: a1 h8
        cin>>s1>>s2;    // here (a,1) -> starting  (h,8)->ending

        cout<<bfs(s1,s2)<<endl;
     }


    return 0;
}