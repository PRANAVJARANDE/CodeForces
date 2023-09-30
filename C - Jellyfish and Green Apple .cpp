#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;cin>>n>>m;
    n%=m;
    int ans=0;
    for(int i=0;i<32;i++)
    {
        ans+=n;
        n*=2;
        n%=m;
        if(n==0)
        {
            cout<<ans<<endl;
            return;
        }
    }
    if(n==0)
    {
        cout<<ans<<endl;
        return;
    }
    cout<<"-1"<<endl;
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
