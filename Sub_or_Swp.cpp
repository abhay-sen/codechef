#include <bits/stdc++.h>
using namespace std;
int main() {
    int testcases;
    cin>>testcases;
    int x[testcases],y[testcases],temp[testcases];
    for (int i = 0; i < testcases; i++)
    {
        cin>>x[i]>>y[i];
    }
    for (int i = 0; i < testcases; i++)
    {
        while (x[i]!=0)
        {
            if (x[i]>y[i])
            {
                swap(x[i],y[i]);
            }
            else
            {
                swap(x[i],y[i]);
                x[i]=x[i]-y[i];
            }
            
        }
        cout<<y[i]<<endl;
        
            
        
        
    }
    
return 0;
}