#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if((b-a)%8!=0) cout<<(b-a)/8 + 1<<endl;
        else if((b-a)/8<0) cout<<0<<endl;
        else cout<<(b-a)/8<<endl;
    }
    
return 0;
}