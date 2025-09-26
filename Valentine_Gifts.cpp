#include <bits/stdc++.h>
using namespace std;
int main() {
    int testcases;
    cin>>testcases;
    int x[testcases];
    for (int i = 0; i < testcases; i++)
    {
        cin>>x[i];
        
    }
    for (int i = 0; i < testcases; i++)
    {
        if (x[i]>126)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        
    }
    }
return 0;
}