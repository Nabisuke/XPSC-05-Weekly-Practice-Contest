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
        int x,y;
        cin>>x>>y;
        int total = 0;
        for (int i = 0; i < y; i++)
        {
            total += pow(2,x-i);
        }
        if (x == y) cout<<total<<"\n";
        else
        {
            int total_1 = 0;
            int a = x - y;
            for (int i = 1; i <= a; i++)
            {
                total_1 += pow(2,i);
            }
            cout<<total-total_1<<"\n";
        }
    }
    return 0;
}