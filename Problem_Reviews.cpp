#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int count; cin>>count;
        int flag=0,arr[count];
        for (int i = 0; i < count; i++)
        {
            cin>>arr[i];
            if (arr[i]<5)
            {
                flag++;
            }
            
            
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
return 0;
}