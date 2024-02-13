
#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,x,y;cin>>n>>x>>y;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<pair<ll,ll>,ll> m;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll p=a[i]%x;
        ll r=a[i]%y;
        ll rp=(x-p)%x;
        ans+=m[{p,r}];
        m[{rp,r}]++;
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
