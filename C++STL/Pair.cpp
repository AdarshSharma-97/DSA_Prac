#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {1, 7};
    // cout << p.first << endl;
    // cout << p.second << endl;
    pair<int, pair<int, int>> p1 = {1, {5, 9}};
    // cout << p1.first << endl;
    // cout << p1.second.first << endl;

    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {5, 6}};
    vec.push_back({7, 8});
    vec.emplace_back(9, 10);
    for (pair<int, int> p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}