#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    set<ll> s1;
    vector<ll>a;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        s1.insert(temp);
    }

    for(ll x: s1)
    {
        a.push_back(x);
    }
    ll ans=0,l=0;
    for(int i=0;i<a.size();i++)
    {
        while(a[i]-a[l]>=n)
        {
            l++;
        }
        ans=max(ans,i-l+1);
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
