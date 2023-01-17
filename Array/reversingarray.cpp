#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reversingArray(vector<int> v)
{

    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> a;
    int x;
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    // a.push_back(2);
    // a.push_back(8);
    // a.push_back(7);
    // a.push_back(1);
    // a.push_back(4);
    // a.push_back(3);
    cout << endl;

    vector<int> ans = reversingArray(a);

    print(ans);
    cout << endl;

    return 0;
}