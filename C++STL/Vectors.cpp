#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}