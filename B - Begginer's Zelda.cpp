#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    vector<vector<ll>>adj(n+1);
    for(int i=0;i<n-1;i++)
    {
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    ll k=0;
    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()==1)
        {
            k++;
        }
    }
    ll ans=ceil((double)k/2.0);
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
