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
        int number=0;
        for (int i = 0; i < count; i++)
        {
            if (arr[i]%2!=0)
            {
                number = number + arr[i]/2 +1 ;
            }
            else
            {
                number =number + arr[i]/2;
            }
            
            
        }
        cout << number << endl;
    }
    
return 0;
}