#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Kadane's Algorithm " << endl;

    // Brutforce Approach
    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};
    // for (int st = 0; st < n; st++) // Start
    // {
    //     for (int end = st; end < n; end++) // End
    //     {
    //         for (int i = st; i <= end; i++) // Print
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};
    // int arr[7] = {3, -4, 5, 4, -1, 7 , -8};
    // int maxSum = INT_MIN;

    // for (int st = 0; st < n; st++) // Start
    // {
    //     int currSum = 0;
    //     for (int end = st; end < n; end++) // End
    //     {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout << "Max subarray sum =" << maxSum << endl;

    int n = 5;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++) // Start
    {
        int currSum = 0;
        currSum += arr[st];
        maxSum = max(maxSum, currSum);
        if (currSum <= 0)
        {
            currSum == 0;
        }
    }
    cout << "Max subarray sum =" << maxSum << endl;

    return 0;
}
