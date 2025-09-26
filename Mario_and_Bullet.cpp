#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int v,s,time;
        cin>>s>>v>>time;
        int result = time-v/s;
        if (result<0) cout<<"0\n";
        else  
            cout<<result<<"\n";
    }
    
return 0;
}