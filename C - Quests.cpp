#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int j=0;j<n;j++)cin>>b[j];
 
    ll maxi=INT_MIN;
    ll ans=0;
    ll s=0;
    for(int i=0;i<n && k-i-1>=0;i++)
    {
        s+=a[i];
        maxi=max(maxi,b[i]);
        ll gg=s+(k-i-1)*maxi;
        ans=max(ans,gg);
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
