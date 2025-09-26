#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n=22;
        vector<int> points(n);
        int index;
        for (int i = 0; i < 22; i++)
        {
            int a,b;
            cin>>a>>b;
            points[i]=a+20*b;
            

        }
        int max= *max_element(points.begin(),points.end());
        for (int i = 0; i < 22; i++)
        {
            if (points[i]==max)
            {
                index=i;
                break;
            }
            
            
        }
        cout<<index+1<<endl;
        
    }
    
return 0;
}