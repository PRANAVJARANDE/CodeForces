#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll> psum(n,0);
    int in=n;
    for(int i=1;i<n;i++)
    {
        psum[i]=psum[i-1]+(a[i]-a[i-1])*i;
        if(psum[i]>k)
        {
            in=i;
            break;
        }
    }
    in--;
    ll rem=k-psum[in];
    ll ans=(rem%(in+1)) + n*(a[in]+(rem/(in+1)))-in;
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
