#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> q;
    priority_queue<int, vector<int>, greater<int>> q;
    // top reverse the defeult order.
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(8);
    q.push(7);

    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }
    return 0;
}