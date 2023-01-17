#include<bits/stdc++.h>
#include<string>
using namespace std;

class trienode{
    public:
    char data;
    trienode* children[26];
    bool isTerminal;

    trienode(char ch){
        data=ch;
        for(int i=0; i<26; i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class trie{
    public:
    trienode* root;

    trie(){
        root= new trienode('\0');
    }

    void insertUtil(trienode* root, string word){
         //base case
         if(word.length()==0){
            root->isTerminal= true;
            return;
         }

         //assumption : words are in caption

         int index = word[0]-'A';
         trienode* child;

         //present
         if(root->children[index] != NULL){
           child=root->children[index]; 
         }
         else{
            //absent
            child = new trienode(word[0]);
            root->children[index]=child;

         }

         //recursion
         insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(trienode* root, string word){
        //base class

        if(word.length()==0){
            return root->isTerminal;
        }
        int index = word[0]-'A';
        trienode* child;

        if(root->children[index]!=NULL){
            child= root->children[index];
        }
        else{
            return false;
        }

        return  searchUtil(child, word.substr(1));
    }
    

    bool searchword(string word){
         return searchUtil(root,word);
    }
};



int main(){
    trie *t= new trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout<<"present or not"<< t->searchword("DFG") <<endl;

            

return 0;
}