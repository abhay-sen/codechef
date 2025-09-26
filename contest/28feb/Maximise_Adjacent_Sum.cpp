#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int count;cin>>count;
        int arr[count];
        for (int i = 0; i < count; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+count);
        int sum=0;
        for (int i = 0; i < count; i++)
        {
            if (i==0||i==1)
            {
                sum+=arr[i];
            }
            else
            {
                sum+=arr[i]*2;
            }
            
        }
        
        cout<<sum<<endl;
    }
    
return 0;
}