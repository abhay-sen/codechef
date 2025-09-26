#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {   
        int n,a;
        cin>>n;
        if (n%2!=0)
        {
            a=(n/2)+1;
            if (n%3!=0)
            {
                cout<<a<<" "<<(n/3)+1<<endl;
            }
            else{
            cout<<a<<" "<<n/3<<endl;
            }
        }
        else
        {
            cout<<n/2<<" "<<n/3+1<<endl;
        }
        
        
    }
    
return 0;
}