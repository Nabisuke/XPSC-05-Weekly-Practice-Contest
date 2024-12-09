#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        int chef = 0;
        int chefina = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'P' && b[i] == 'R')) chef++;
            else if ((b[i] == 'R' && a[i] == 'S') || (b[i] == 'S' && a[i] == 'P') || (b[i] == 'P' && a[i] == 'R')) chefina++;
        }
        if (chef > chefina) cout<<0<<"\n";
        else if (chef == chefina) cout<<1<<"\n";
        else
        {
            cout<<chefina-chef<<"\n";
        }
    }   
    return 0;
}