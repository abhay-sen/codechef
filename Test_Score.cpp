#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n,marks,tobtain;
        cin>>n>>marks>>tobtain;
        if (tobtain%marks==0)
        {
            if (tobtain/marks<=n) cout<<"Yes\n";
            else cout<<"No\n";
        }
        else cout<<"No\n";
        
    }
    
return 0;
}