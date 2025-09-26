#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        if(n==1) cout<<6<<endl;

        else cout<<2*6*(n/2+n%2)+1*(n/2)<<endl;
    }
    
return 0;
}