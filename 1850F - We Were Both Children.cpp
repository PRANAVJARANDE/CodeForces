#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll>a(n);
    vector<ll> freq(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=n)freq[a[i]]++;
    }
    ll ans=0;
    vector<ll>dp(n+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            dp[j]+=freq[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,dp[i]);
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
