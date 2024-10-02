#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // your code goes here
        long long m;
        cin >> m;
        long long p;
        cin >> p;
        int ans = 0;
        int currentPenalty = p;
        int index = m;
        while (m < 300 && currentPenalty <= 1000 - m)
        {
            m++;
            currentPenalty += 20;
            ans++;
        }
        cout << ans - 1 << endl;
    }
}