#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["c"] = 5;
    m["a"] = 15;
    m["b"] = 45;

    m.insert({"bike", 7});
    m.emplace("car", 7);

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
        ;
    }

    cout << m.count("bike") << endl;
    // m.erase("bike");
    // cout << m["bike"] << endl;

    if (m.find("bike") != m.end())
    {
        cout << "fount\n";
    }
    else
    {
        cout << "not found\n";
    }
    cout << endl;
    return 0;
}