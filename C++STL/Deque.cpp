#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Random value is accessiable
    deque<int> d = {5, 8, 9, 3, 5, 7};

    for (int val : d)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << d[2] << endl;
    return 0;
}