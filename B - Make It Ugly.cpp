#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll c=a[0];
    ll ans=LLONG_MAX;
    ll k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=c)
        {
            ans=min(ans,k);
            k=0;
        }
        else
        {
            k++;
        }
    }
    ans=min(ans,k);
    if(ans==n)
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
