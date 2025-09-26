#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> arr(n);
        vector<int> brr;
        brr.push_back(0);
        int happiness=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]>=l&&arr[i]<=r)
            {
                happiness++;
            }
            else
            {
                happiness--;
            }
            brr.push_back(happiness);
            
        }
        sort(brr.begin(),brr.end());
        cout<<brr[brr.size()-1]<<" "<<brr[0]<<endl;
        
        
    }
    
return 0;
}