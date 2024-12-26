#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string, int> m;
    m.emplace("tv", 75);
    m.emplace("tv", 75);
    m.emplace("tv", 75);
    m.emplace("car", 75);

    m.erase(m.find("car")); // finding using iterator

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}