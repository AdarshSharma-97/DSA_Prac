#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Pass By referenec.
// void changeArr(int arr[], int size)
// {
//     cout << "in Function\n";
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = 2 * arr[i];
//     }
// }

// Linear Search.

int linearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{

    // int nums[] = {5, 15, 22, 1, -15, 24};
    // int size = 6;

    // // Smallest and Largest in array
    // int smallest = INT_MAX;
    // int largest = INT_MAX;

    // for (int i = 0; i < size; i++)
    // {
    //     smallest = min(nums[i], smallest);
    //     largest = max(nums[i], largest);
    // }

    // cout << "smallest: " << smallest << endl;
    // cout << "largest: " << largest << endl;

    // Pass By referenec.
    // int arr[] = {1, 2, 3};
    // changeArr(arr, 3);

    // cout << "in main\n";
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // cout << endl;

    // Linear search

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    // int target = 99;

    // cout << linearSearch(arr, sz, target) << endl;

    reverseArray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}