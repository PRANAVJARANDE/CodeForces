#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll W,H;cin>>W>>H;
    ll x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
    ll w,h;cin>>w>>h;

    ll ans=INT_MAX;

    if(w+x2-x1<=W)
    {
        ll hs=min(max(0ll,w-W+x2),max(0ll,w-x1));
        ans=min(ans,hs);
    }
    if(h+y2-y1<=H)
    {
        ll vs=min(max(0ll,h-H+y2),max(0ll,h-y1));
        ans=min(ans,vs);
    }
    if(ans==INT_MAX)
    {
        cout<<"-1"<<endl;
        return;
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
