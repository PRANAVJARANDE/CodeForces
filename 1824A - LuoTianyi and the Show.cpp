#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,m;cin>>n>>m;
    vector<ll> x(n);
    ll cnt1=0,cnt2=0;
    set<ll> s1;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]==-1)cnt1++;
        else if(x[i]==-2)cnt2++;
        else s1.insert(x[i]);
    }
    vector<ll> v1;
    for(ll x: s1)v1.push_back(x);
    ll vs=v1.size();
    ll ans=max(cnt1,cnt2)+vs;
    for(int i=0;i<vs;i++)
    {
        ll k=1+min(v1[i]-1,i+cnt1)+min(m-v1[i],vs-i-1+cnt2);
        ans=max(ans,k);
    }
    ans=min(ans,m);
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
