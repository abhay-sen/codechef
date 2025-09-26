#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n; cin >> n;
        string s;cin>>s;
        vector<char> complimentary;
        for (int i = 0; i < n; i++)
        {
            if (s.at(i) == 'A')complimentary.push_back('T');
            else if (s.at(i)=='T')complimentary.push_back('A');
            else if (s.at(i)=='C')complimentary.push_back('G');
            else complimentary.push_back('C');
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<complimentary[i];
        }
        cout<<endl;
    }
    
return 0;
}