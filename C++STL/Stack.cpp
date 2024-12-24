#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // LIFO - Last in first cout
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;

    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    stack<int> s2;

    s2.swap(s);
    cout << s.size() << endl;
    cout << s2.size() << endl;

    return 0;
}