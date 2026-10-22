#include <iostream>
using namespace std;
int main()
{

    // Prime Number using For loop
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;
    // bool isPrime = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     // rem=0, not a prime number
    //     if (n % i == 0)
    //     {
    //         // cout << "Not a prime number" << endl;
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if (isPrime == 0)
    // {
    //     cout << "Not a Prime Number" << endl;
    // }
    // else
    // {
    //     cout << "is a prime number" << endl;
    // }

    // Continue Keyword:
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Hii" << endl;
    //     cout << "Hey" << endl;
    //     continue;
    //     cout << "Reply please.!!!"; // unreachable
    // }

    //

    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " ";
    //     i--;
    // } output: infinte loop

    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}
