#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll k,q;cin>>k>>q;
    ll mini=LLONG_MAX;
    for(int i=0;i<k;i++)
    {
        ll j;cin>>j;
        mini=min(mini,j);
    }
 
    while(q--)
    {
        ll u;cin>>u;
        ll ans=min(mini-1,u);
        cout<<ans<<" ";
    }
    cout<<endl;
 
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
