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
        int type_1_total = n*x;
        int type_2_max = n / 2;
        int hours_left = n % 2;
        int type_2_total = (type_2_max*y) + (hours_left*x);
        int result = max(type_1_total,type_2_total);
        cout<<result<<"\n";
    }   
    return 0;
}