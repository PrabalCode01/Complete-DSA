#include<bits/stdc++.h>
#include<string>
using namespace std;
            // reversing string using recursion

void reverse(string& str, int i, int j){

    //cout<<"Call recieved for "<<str<<endl;


    //base case
    if(i>j){
        return ;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str,i,j);
}

bool checkpalindrome(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkpalindrome(str, i+1, j-1);
    }
}
int main(){
    string name="prabal singh";
    reverse(name,0,name.length()-1);
    int ans= checkpalindrome(name, 0, name.length()-1);
    cout<<name<<endl;
    cout<<ans<<endl;
            

return 0;
}