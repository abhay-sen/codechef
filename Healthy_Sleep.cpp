#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if (n<8)
    {
        cout<<"LESS";
    }
    
    
    else if(n>8)
    {
        cout<<"MORE";
    }
    else
    {
        cout << "PERFECT";
    }

return 0;
}