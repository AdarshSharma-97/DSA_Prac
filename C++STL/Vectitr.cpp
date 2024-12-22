#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {2, 4, 6, 8, 0};

    // cout << "Vec.begin:" << *(vec.begin()) << endl;
    // cout << "Vec.end:" << *(vec.end()) << endl;

    vector<int>::iterator it;

    // for (it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout << *(it) + 5 << " ";
    // }

    // vector<int>::reverse_iterator it2;

    // for (it2 = vec.rbegin(); it2 != vec.rend(); it2++)
    // {
    //     cout << *(it2) << " ";
    // }

    for (auto it2 = vec.rbegin(); it2 != vec.rend(); it2++)
    {
        cout << *(it2) << " ";
    }

    cout << endl;

    return 0;
}