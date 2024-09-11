#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> A(n);
        unordered_map<int, int> freq_map;

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            freq_map[A[i]]++;
        }

        vector<int> frequencies;
        for (auto &pair : freq_map)
        {
            frequencies.push_back(pair.second);
        }

        sort(frequencies.rbegin(), frequencies.rend());

        int max_length = 0;

        for (int i = 1; i <= frequencies.size(); i++)
        {
            int sum_frequencies = 0;
            for (int j = 0; j < i; j++)
            {
                sum_frequencies += frequencies[j];
            }
            if (sum_frequencies % i == 0)
            {
                max_length = max(max_length, sum_frequencies);
            }
        }

        cout << max_length << endl;
    }
}

int main()
{
    solve();
    return 0;
}
