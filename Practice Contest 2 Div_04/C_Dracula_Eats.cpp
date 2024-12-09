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
        int n;
        cin>>n;
        int start = 2;
        int cnt = 0;
        while(start <= n)
        {
            cnt++;
            start += 7;           
        }
        cout<<cnt<<"\n";
    }   
    return 0;
}