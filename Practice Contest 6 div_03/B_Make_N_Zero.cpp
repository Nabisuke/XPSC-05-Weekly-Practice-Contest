#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin>>t;
    while (t--)
    {
        int n; 
        cin>>n;
        bool flag = false;
        while (n >= 0)
        {
            if (n % 3 == 0 || n % 4 == 0)
            {
                flag = true;
                break;
            }
            else n -= 4;
            
        }
        if (flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
