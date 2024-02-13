#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll i=0;
    while(i<n && a[i]==a[0])
    {
        i++;
    }
    ll j=n-1;
    while(j>=0 && a[j]==a[n-1])
    {
        j--;
    }
    if(a[0]==a[n-1])
    {
        ll ans=max(0ll,j-i+1);
        cout<<ans<<endl;
    }
    else
    {
        ll ans=min(j+1,n-i);
        cout<<ans<<endl;
    }
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
