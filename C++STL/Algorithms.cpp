#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    // to sort on the sacond value basis
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    else
        return false;
}
int main()
{
    int arr[6] = {7, 4, 8, 2, 9, 1};
    vector<int> vec = {7, 4, 8, 2, 9, 1};
    vector<pair<int, int>> vec1 = {{7, 4}, {8, 2}, {9, 1}};

    sort(arr, arr + 6);
    // sort(vec.begin(), vec.end(), greater<int>());
    sort(vec1.begin(), vec1.end(), compare);
    reverse(vec.begin(), vec.end());

    // for (int val : arr)
    // {
    //     cout << val << endl;
    // }
    // cout << endl;

    for (int val : vec)
    {
        cout << val << endl;
    }
    cout << endl;

    // for (auto p : vec1)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }
    // cout << endl;

    string s = "abc";
    next_permutation(s.begin(), s.end());
    prev_permutation(s.begin(), s.end());

    cout << s << endl;

    cout << *(min_element(vec.begin(), vec.end())) << endl;
    cout << *(max_element(vec.begin(), vec.end())) << endl;
    cout << binary_search(vec.begin(), vec.end(), 9) << endl;
    cout << __builtin_popcount(9) << endl;
    cout << __builtin_popcountl(9000) << endl;
    cout << __builtin_popcountll(436799) << endl;
    return 0;
}