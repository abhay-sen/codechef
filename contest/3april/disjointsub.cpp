#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> oddarr, evenarr;
        for (long long i = 0; i < n; i += 2)
        {
            evenarr.push_back(arr[i]);
        }
        for (long long i = 1; i < n; i += 2)
        {
            oddarr.push_back(arr[i]);
        }
        vector<long long> oddbrr = oddarr;
        vector<long long> evenbrr = evenarr;
        sort(oddbrr.begin(), oddbrr.end());
        sort(evenbrr.begin(), evenbrr.end());
        int flag = 0;
        for (long long i = 0; i < evenbrr.size(); i++)
        {
            if (evenbrr[i] != evenarr[i])
            {
                flag++;
            }
        }
        for (long long i = 0; i < oddbrr.size(); i++)
        {
            if (oddbrr[i] != oddarr[i])
            {
                flag++;
            }
        }
        if (flag == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
