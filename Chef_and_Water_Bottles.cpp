#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int maxbottles,capacity,total;
        cin>>maxbottles>>capacity>>total;
        if (total/capacity< maxbottles)  cout<<total/capacity<<endl;
        else cout<<maxbottles<<endl;
        
        
    }
    
return 0;
}