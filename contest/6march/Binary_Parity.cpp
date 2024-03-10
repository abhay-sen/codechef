#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int x;cin>>x;
        int sum=0;
        while (x!=0)
        {
            sum+=x%2;
            x/=2;
        }
        if (sum%2!=0)
        {
            cout<<"ODD"<<endl;
        }
        else cout<<"EVEN"<<endl;
        
    }
    
return 0;
}