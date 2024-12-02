#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int a=10;
    // int* ptr = &a;

    // cout<< *(&a)<< endl;
    // cout<< *(ptr)<< endl;

    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;
    return 0;
}