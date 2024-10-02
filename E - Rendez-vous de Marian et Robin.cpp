#include <bits/stdc++.h>
using namespace std;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef long long ll;
typedef vector<long long> vll;

#define endl "\n"

const ll INF = 0x3f3f3f3f3f3f3f3f;

vector<vll> helper(ll src,ll n,vector<vector<vll>>&adj,vector<ll>&s1)
{
    priority_queue<vll, vector<vll>, greater<vll>> q1;
    vector<vll>dist(n,vll(2,INF));
    dist[src][0]=0;
    q1.push({0,src,0});
    while(!q1.empty())
    {
        ll dis=q1.top()[0];
        ll in=q1.top()[1];
        ll vh=q1.top()[2];
        q1.pop();
        if(dis>dist[in][vh])continue;
        bool hs=(vh || s1[in]); 
        for(auto x: adj[in])
        {
            ll nd=x[1];
            if(hs)nd/=2;
            if(dist[x[0]][hs]>dist[in][vh]+nd)
            {
                dist[x[0]][hs]=dist[in][vh]+nd;
                q1.push({dist[x[0]][hs],x[0],hs});
            }
        }
    }
    return dist;
}


void solve()
{
    ll n,m,h;cin>>n>>m>>h;
    vll s1(n);
    while(h--)
    {
        ll j;cin>>j;
        j--;
        s1[j]=1;
    }
    vector<vector<vll>>adj(n);
    while(m--)
    {
        ll l,r,w;cin>>l>>r>>w;
        l--;
        r--;
        adj[l].push_back({r,w});
        adj[r].push_back({l,w});
    }
    
    vector<vll> d1=helper(0,n,adj,s1);
    vector<vll> d2=helper(n-1,n,adj,s1);
    ll ans=INF;
    for(int i=0;i<n;i++)
    {
        ans=min(ans,max(min(d1[i][0],d1[i][1]),min(d2[i][0],d2[i][1])));
    }
    if(ans==INF)ans=-1;
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
