#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> s;
    // multiset<int> s;
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);

    // cout << "lower bound = " << *(s.lower_bound(4)) << endl;

    for (auto val : s)
    {
        cout << val << endl;
    }
    cout << "----" << endl;
    return 0;
}