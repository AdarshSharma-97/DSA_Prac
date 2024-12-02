#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // cout << "Hello World" << endl;
    // Number Pattern -------------------------------
    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < n; j++)
    //     {
    //         // cout << j << " ";
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // Alphabets::Alphabets

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Square Pattern

    // int n = 3;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Triangel Pattern
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // Triangel Number Pattern
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //  Reverse Triangel Number Pattern

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //  Floydes Triangel  Pattern

    // int n = 4;
    // char num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    //  Floydes Triangel  Pattern Char version

    // int n = 4;
    // char num = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    //  Inverted Triangel  Pattern

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << (i + 1);
    //     }

    //     cout << endl;
    // }

    //  Inverted Triangel  Pattern

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << (i + 1) << " ";
    //     }
    //}

    //     cout << endl;

    // Pyramid Pattern
    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << (i + 1) << " ";
    //     }

    //     cout << endl;
    // }

    // Pyramid Pattern
    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // num set 1
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     // num set 2
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    //    1
    //   121
    //  12321
    // 1234321

    // Hollow Diamond Pattern

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // // spaces
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != 0)
    //     {
    //         // spaces
    //         for (int j = 0; j < 2 * i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // //Bottom
    // for (int i = 0; i < n - 1; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != n - 2 )
    //     {
    //         for (int j = 0; j < 2 * (n - i) - 5; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Butterfly Pattern

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }

        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " *";
    //     }
    //     int c = (2 * n - 2 * i);
    //     for (int j = 1; j <= c; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }
    return 0;
}