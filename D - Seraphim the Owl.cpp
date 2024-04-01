#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,m;cin>>n>>m;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    ll ans=0;
    ll pb=0;
    for(int i=n-1;i>=m;i--)
    {
        if(a[i]<=b[i])
        {
            ans+=a[i]+pb;
            pb=0;
        }
        else
        {
            pb+=b[i];
        }
    }
    ll res=LLONG_MAX;
    for(int i=m-1;i>=0;i--)
    {
        res=min(res,a[i]+pb+ans);
        pb+=b[i];
    }
    cout<<res<<endl;
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
