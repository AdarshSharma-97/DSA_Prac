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

    // vec.pop_back();
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "Value at index 2 " << vec[2] << " or " << vec.at(2) << endl;
    cout << "Value at front " << vec.front() << " and on back " << vec.back() << endl;

    vector<int> vec1 = {2, 4, 6, 8, 0};
    for (int val : vec1)
    {
        cout << val << " ";
    }
    vector<int> vec2(3, 25);
    cout << endl;

    for (int val : vec2)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> vec3 = {2, 4, 6, 8, 0};
    vector<int> vec4(vec3);
    for (int val : vec4)
    {
        cout << val << " ";
    }
    cout << endl;
    //--------------------------------------------------
    // erase
    vector<int> vec5 = {2, 4, 6, 8, 0};
    // vec5.erase(vec5.begin());
    // vec5.erase(vec5.begin()+2);
    vec5.erase(vec5.begin() + 1, vec5.begin() + 3);
    vec5.insert(vec5.begin() + 2, 100);
    for (int val : vec5)
    {
        cout << val << " ";
    }
    // vec5.clear();
    for (int val : vec5)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "is empty " << vec5.empty() << endl;
    return 0;
}