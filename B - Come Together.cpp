#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll xa,ya;cin>>xa>>ya;
    ll xb,yb;cin>>xb>>yb;
    ll xc,yc;cin>>xc>>yc;

    ll ans=1;
    if((xa-xb)*(xa-xc)>=0)
    {
        ans+=min(abs(xa-xb),abs(xa-xc));
    }
    
    if((ya-yb)*(ya-yc)>=0)
    {
        ans+=min(abs(ya-yb),abs(ya-yc));
    }

    cout<<ans<<endl;
    
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
