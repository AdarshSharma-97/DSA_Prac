#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = {'a', 'b', 'c', '\0'};
    char str1[] = "Hello";

    // cout << strlen(str) << endl;
    cout << str1[3] << endl;
    char str2[10];
    // cin >> str2; //if use cin for an scentance it will delete text after first space
    cin.getline(str2, 100, '$');
    cout << "Output of str : " << str2 << endl;
    return 0;
}