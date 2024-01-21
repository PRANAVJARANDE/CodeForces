#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,w,h;cin>>n>>w>>h;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    ll ls=LLONG_MIN,rs=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        ls=max(b[i]+h-w-a[i],ls);
        rs=min(b[i]-h-a[i]+w,rs);
    }

    if(ls<=rs)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
