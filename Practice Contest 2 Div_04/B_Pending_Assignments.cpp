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
        int x,y,z;
        cin>>x>>y>>z;
        if ((x*y) > (z*1440)) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }   
    return 0;
}