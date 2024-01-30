#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll a,b,r;cin>>a>>b>>r;
    ll maxi=max(a,b);
    ll mini=min(a,b);
    ll rt=0,ans=maxi-mini;
    for(int i=0;(rt+1ll<<i)<=r;i++)
    {
        if(mini>maxi)
        {
            swap(mini,maxi);
        }
        if((maxi & (1ll<<i)) && !(mini & (1ll<<i)))
        {
            rt=rt+(1ll<<i);
            maxi=maxi ^ (1ll<<i);
            mini=mini ^ (1ll<<i);
            ans=min(ans,abs(maxi-mini));
        }
    }
    rt=0;
    maxi=max(a,b);
    mini=min(a,b);
    for(int i=60;i>=0;i--)
    {
        if(rt + (1ll << i) > r)
            continue;

        if(mini>maxi)
        {
            swap(mini,maxi);
        }
        if((maxi & (1ll<<i)) && !(mini & (1ll<<i)))
        {
            rt=rt+(1ll<<i);
            maxi=maxi ^ (1ll<<i);
            mini=mini ^ (1ll<<i);
            ans=min(ans,abs(maxi-mini));
        }
        
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
