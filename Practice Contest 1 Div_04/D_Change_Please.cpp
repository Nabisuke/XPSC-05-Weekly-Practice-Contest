#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int change = 100-x;
        if (change % 10 == 0) cout<<change<<"\n";
        else
        {
            int change_1 = (change / 10) * 10;
            cout<<change_1<<"\n"; 
        }       
    }
    return 0;
}