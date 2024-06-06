#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll maxi=LLONG_MAX;
    for(int i=0;i<n-1;i++)
    {
        maxi=min(maxi,max(a[i],a[i+1]));
    }
    cout<<maxi-1<<endl;
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
