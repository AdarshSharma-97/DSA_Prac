#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

    // In vectors, data is inserted at the end.Inserting at the end takes differential time, as sometimes the array may need to be extended.Removing the last element takes only constant time because no resizing happens.Inserting and erasing at the beginning or in the middle is linear in time.

    // vector<int> vecto = {
    //     9,
    //     8,
    //     6,
    //     4,
    //     31,
    // };
    // vector<int> vecto1(5, 0);
    // // cout << vecto1[0] << endl;

    // for (int i : vecto1)
    // {
    //     cout << i << endl;
    // }

    // vector<char> ctrs = {
    //     'a',
    //     'b',
    //     'c',
    //     'd',
    //     'e',
    // };

    // for (char i : ctrs)
    // {
    //     cout << i << endl;
    // }

    // ctrs.push_back('k');
    // for (char i : ctrs)
    // {
    //     cout << i << endl;
    // }

    // ctrs.pop_back();

    //    for (char i : ctrs)
    // {
    //     cout << i << endl;
    // }

    // cout << ctrs.at(1) << endl;

    // Static vs Dynamic Allocation

    // vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    // Single Number leet code problem 136.
    vector<int> nums = {4, 1, 2, 1, 2};
    int ans = 0;
    for (int val : nums)
    {
        ans = ans ^ val;
        // ans ^ = val;

        return ans;
    }
    cout << ans << endl;
    return 0;
}