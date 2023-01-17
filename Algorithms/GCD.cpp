#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter the two numbers whose GCD is required: " << endl;
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b)<<endl;

    // We can also find LCM of a and b by finding GCD
    int k= (a*b)/gcd(a,b);
    cout<<"The LCM of two numbers is: "<<k<<endl;

    return 0;
}