#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll k;
        cin>>n>>k;
        ll min_waste = INT_MAX;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ll num_cookies;
            cin>>num_cookies;
            if (num_cookies < k) cnt++; 
            else min_waste = min(min_waste, num_cookies % k);
        }
        if (cnt == n) cout<<-1<<"\n";
        else cout<<min_waste<<"\n";
        
    }
    
    return 0;
}