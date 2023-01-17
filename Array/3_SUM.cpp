#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>> three_sum(vector<int> &num){

    sort(num.begin(), num.end());
    vector<vector<int>> res;

    for(int i=0; i<num.size()-2; i++){

        if(i==0 || (i>0  && num[i]!=num[i-1])){

            int s=i+1;
            int e=num.size()-1;
            int sum = 0-num[i];

            while(s<e){

                if(num[s]+num[e]==sum){
                    vector<int> temp;
                    temp.push_back(num[i]);
                    temp.push_back(num[s]);
                    temp.push_back(num[e]);
                    res.push_back(temp);

                    while(s<e && num[s]==num[s+1]) s++;
                    while(s<e && num[e]==num[e-1]) h--;

                    s++;
                    e--;
                }
                else if(num[s]+num[e]<sum) s++;
                else e--;
            }
        }
    }
    return res;
}



int main(){


    return 0;

}