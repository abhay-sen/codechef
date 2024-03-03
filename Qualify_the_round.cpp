#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int x,a,b;
        cin>>x>>a>>b;
        if (a+2*b<x)
        {
            cout<<"NotQualify"<<endl;
        }
        else
        {
            cout<<"Qualify"<<endl;
        }
        
        
    }
    
return 0;
}