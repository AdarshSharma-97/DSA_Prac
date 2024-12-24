#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.emplace_back(5);
    l.push_front(4);
    l.push_front(3);
    l.push_back(2);

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.pop_back();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    /// Random value is not  accessiable
    // cout << l[2] << endl;
    return 0;
}