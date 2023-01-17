#include<bits/stdc++.h>
#include<string>
using namespace std;

void alphabetnumber(int n, string arr[]){
    //base condition
    if(n==0){
        return;
    }

    //processing
    int digit= n%10;
    n /= 10;

    //recursive call
    alphabetnumber(n, arr);

    cout<<arr[digit]<<" ";

    

}

int main(){
            int n;
            cout<<"Enter the number: ";
            cin>>n;

            string arr[10]={"Zero", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN",
                                "EIGHT", "NINE"};
            
            alphabetnumber(n, arr);
return 0;
}