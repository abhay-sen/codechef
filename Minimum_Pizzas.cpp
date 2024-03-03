#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,t;
        cin>>n>>t;
        if ((n*t)%4==0)
        {
            cout<<(n*t)/4<<endl;
        }
        else
        {
            cout<<(n*t)/4 + 1<<endl;
        }
        
        
    }
    
return 0;
}