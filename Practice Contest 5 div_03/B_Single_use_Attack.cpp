#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int h,x,y;
        cin>>h>>x>>y;
        int remaining_health = h - y;
        int cnt = 1;
        while(remaining_health > 0)
        {
            remaining_health -= x;
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    
    return 0;
}