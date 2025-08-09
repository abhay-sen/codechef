#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if (n <= k)
            cout << -1 << " " << -1 << endl;
        else if (n % 2 == 0)
        {
            if (n - 1 - k >= 2)
                cout << n - 1 << " " << 2 << endl;
            else
                cout << -1 << " " << -1 << endl;
        }
        else
        {
            if (n - k >= 2)
                cout << n << " " << 2 << endl;
            else
                cout << -1 << " " << -1 << endl;
        }
    }
}
/*
The basic idea behind the code was to maximize the lcm of numbers. The lcm of 2 and any odd number(x) is 2*x and gcd is 1.

Considering a=n(Maximum possible ). If b=2 and a is odd so check if a-k>=2 (if it is less than 2 all cases fail and simply we have -1).

In case of even number again look for highest odd number and same a-1-k>=2 else -1.

Note:- This case of one number 2 will always cover corner cases too.
*/