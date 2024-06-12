#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<long long> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        int count=0;
        for (int i = n-1; i >=0; i--)
        {
            if (arr[i]!=1&&(3*arr[i])%(arr[i]-1)==0)
            {
            for (int j = 0; j < i; j++)
            {
                if(arr[j]==((3*arr[i])/(arr[i]-1)))
                    count++;
            }
            }
            
            }
            
            cout<<count<<endl;
        }
        
        
}
    

