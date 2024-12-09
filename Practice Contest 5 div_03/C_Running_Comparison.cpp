#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        vector<int> v_1(n);
        for (int i = 0;i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0;i < n; i++)
        {
            cin>>v_1[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int alice = v[i];
            int bob = v_1[i];
            bool flag = true;
            bool flag_1 = true;
            if (bob > 2 * alice) flag = false;
            if (alice > 2 * bob) flag = false;
            if (flag and flag_1) cnt++;
        }
        cout<<cnt<<"\n";
    }
    
    return 0;
}