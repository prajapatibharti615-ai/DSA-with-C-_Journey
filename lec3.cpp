#include <iostream>
using namespace std;
int main()
{

    // int n;
    // // int i;
    // int i = 0;
    // int sum = 0;
    // cout << "Enter the value of n:" << endl;
    // cin >> n;
    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //         sum = sum + i;
    //     }
    //     i++;
    // }
    // cout << "The Sum of Even Number:\t" << sum << endl;

    // Print Prime Number by shivam
    // int n;
    // cout << "Enter the value of N:" << endl;
    // cin >> n;
    // int counter = 0;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         counter++;
    //     }
    // }
    // if (counter == 1)
    // {
    //     cout << "Non Prime Number" << endl;
    // }
    // else
    // {
    //     cout << "Prime Number" << endl;
    // }

    // Prime Number By Love Babbar

    // int n;
    // cin >> n;
    // int i = 2;
    // while (i < n)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not Prime for" << i << endl;
    //     }
    //     else
    //     {
    //         cout << "Prime for" << i << endl;
    //     }
    //     i = i + 1;
    // }

    // Patterns:
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}