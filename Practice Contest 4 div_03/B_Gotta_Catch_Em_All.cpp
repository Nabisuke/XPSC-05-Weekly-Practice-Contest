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
        int n,x,y;
        cin>>n>>x>>y;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin>>c;
            if (x*c > y) total += y;
            else total += x*c;
        }
        cout<<total<<"\n";
    }
    
    return 0;
}