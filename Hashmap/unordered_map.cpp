#include<bits/stdc++.h>
#include<unordered_map>
#include<map>
using namespace std;

int main(){

    //creation
    unordered_map<string,int> m;   // it print data in random order
                                   
            // if it is map(defalut-ordered) then key-value pair will be in a order 

            // for unorderd map -- time complex.. is contant O(1)
            // but in case of map time complexity is O(log n)

    
    //insertion

    //1
    pair<string,int> p= make_pair("Prabal",5);
    m.insert(p);

    //2
    pair<string,int> q("pratap",6);
    m.insert(q);

    //3
    m["singh"]=1;
    m["hello"]=2;
    m["hello"]=3;  // it will update the value


    //search
    cout<<m["Prabal"]<<endl;
    cout<< m.at("singh")<<endl;
    cout<< m.at("hello")<<endl;

    //cout<<m.at["unknown"]<<endl;  // it will give error

    cout<<m["unknown"]<<endl;  // it create a unknown entry with value 0
    


    //size
    cout<<m.size()<<endl;


    //to check the presence of any key
    cout<< m.count("bro")<<endl;   // in case of absent it return 0
    cout<< m.count("singh")<<endl;  // in case of present it return 1


    //erase
    m.erase("hello");
    cout<<m.size()<<endl;

    //traversing a map
    for(auto i: m){
        cout<< i.first <<" "<<i.second<<endl;
    }


    //traversing through iterator
    unordered_map<string,int> :: iterator it= m.begin();

    while( it!= m.end()){

        cout<<it->first <<" "<<it->second<<endl;
        it++;
    }
    


            

return 0;
}