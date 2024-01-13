#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,k,x;cin>>n>>k>>x;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll>psum(n);
    sort(a.begin(),a.end(),greater<ll>());
    psum[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        psum[i]=psum[i+1]+a[i];
    }
    ll ans=LLONG_MIN;
    if(k==n)
    {
        ans=0;
    }
    ll rsum=psum[0];
    for(int i=0;i<=min(k,n-1);i++)
    {
        ll negsum=psum[i];
        if(i+x<n)
        {
            negsum-=psum[i+x];
        }
        ll possum=rsum-negsum;
        ll tans=possum-negsum;
        ans=max(ans,tans);
        rsum-=a[i];
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
