#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int rows,cols,x,y,length;
        cin>>rows>>cols>>x>>y>>length;
        int positionx,positiony;
        positionx=(cols-x)/length;
        positiony=(rows-y)/length;
        cout<<positionx*positiony<<endl;
    }
    
return 0;
}