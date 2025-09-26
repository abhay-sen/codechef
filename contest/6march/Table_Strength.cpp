#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int count;cin>>count;
        int num=count;
        vector<int> arr;
        while (count--)
        {
            int i;cin>>i;
            arr.push_back(i);
        }
        sort(arr.begin(),arr.end());
        vector<int> tables;
        for (int i = 1; i <num+1; i++)
        {
            tables.push_back(arr[num-i]*i);
        }
        sort(tables.begin( ), tables.end( ) );
        cout<<(tables[num-1])<<endl;
        
    }
    
return 0;
}