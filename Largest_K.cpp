#include <bits/stdc++.h>
using namespace std;
int main() {
    int count,x[count],y[count];
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cin>>x[i]>>y[i];
    }
    for (int i = 0; i < count; i++)
    {
        cout<<y[i]/(x[i]-1)<<endl;
    }
    
return 0;
}