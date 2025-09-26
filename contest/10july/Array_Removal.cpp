#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

typedef long long ll;
const int INF = 1e9;

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    ll target = (1LL << 32) - 1; // 2^32 - 1

    // dp[mask]: minimum elements to remove to make OR of selected elements in mask to be 2^32 - 1
    vector<int> dp(1 << n, INF);
    dp[0] = 0; // No elements selected, no removal needed

    for (int mask = 0; mask < (1 << n); ++mask)
    {
        ll or_sum = 0;
        int elements_removed = 0;

        // Calculate the OR sum and number of elements removed
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            {
                or_sum |= arr[i];
            }
            else
            {
                ++elements_removed;
            }
        }

        if (or_sum == target)
        {
            dp[mask] = min(dp[mask], elements_removed);
        }
        else
        {
            // Try to update dp[mask | (1 << j)] for all j not in mask
            for (int j = 0; j < n; ++j)
            {
                if (!(mask & (1 << j)))
                {
                    dp[mask | (1 << j)] = min(dp[mask | (1 << j)], dp[mask] + 1);
                }
            }
        }
    }

    cout << dp[(1 << n) - 1] << "\n";
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
