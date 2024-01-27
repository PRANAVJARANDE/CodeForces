#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,m;cin>>n>>m;
    vector<int>indeg(n,0);
    for(int i=0;i<m;i++)
    {
        int u,v;cin>>u>>v;
        u--;
        v--;
        indeg[u]++;
        indeg[v]++;
    }
    int in=0;
    for(int i=0;i<n;i++) if(indeg[i]==1)in++;
    int y=in/(m-in);
    int x=in/y;
    cout<<x<<" "<<y<<endl;
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

