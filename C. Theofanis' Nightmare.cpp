#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll> suff(n,0);
    suff[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) suff[i]=suff[i+1]+a[i];
    ll ans=suff[0];
    for(int i=1;i<n;i++)
    {
        if(suff[i]>0)
        {
            ans+=suff[i];
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
