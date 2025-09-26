#include <bits/stdc++.h>
using namespace std;
int main() {
    int count   ;cin>>count;
    string s1 = "I hate ";
    string s2 = "I love ";
    for (int i = 0; i < count; i++)
    {
        
        if (i==0)
        {
            cout<<s1;
        }
        else if(i%2==0){
            cout<<"that "<<s1;
        }
        else{
            cout<<"that "<<s2;
        }

        
    }
    cout << "it";

    return 0;
}