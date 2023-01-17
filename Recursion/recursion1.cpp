#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){            // Base case is mandatory
        return 1;
    }


    int ans=n;
    //ans= ans * fact(n-1);

    return ans*fact(n-1);

}

int power(int n){
    
    if(n==0){
        return 1;
    }

    return 2*power(n-1);
}
void print(int n){
    if(n==0){
        return ;
    }

    cout<<n<<" ";
    print(n-1);
}

int main(){
            int n;
            cin>>n;
            cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;

            cout<<"2 raise to power "<<n<<" is "<<power(n)<<endl;

            print(n);

return 0;
}