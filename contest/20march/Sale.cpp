#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        vector<long long> closing(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <=i; j++)
            {
                if(j==i) closing[i]+=2*arr[j];
                else closing[i]+=arr[j];
            }
            
        }
        sort(closing.begin(),closing.end());
        cout<<closing[n-1]<<endl;
    }
return 0;
}