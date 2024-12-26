#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m;

    m.emplace("tv", 75);
    m.emplace("car", 75);
    m.emplace("laptop", 75);
    m.emplace("appple", 75);

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;
    return 0;
}