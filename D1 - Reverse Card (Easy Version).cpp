#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,m;cin>>n>>m;
    ll ans=0;
    for(int i=1;i<=m;i++)
    {
        ans+=(n+i)/(1ll*i*i);
    }
    cout<<ans-1<<endl;
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
