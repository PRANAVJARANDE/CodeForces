#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void build(int node,int i,int j,vector<ll>&a,vector<ll>&b,vector<vector<ll>>&tree)
{
    if(i==j)
    {
        ll ans=min(a[i],b[i]);
        ll arem=a[i]-ans;
        ll prem=b[i]-ans;
        tree[node]={arem,ans,prem};
        return;
    }
    ll mid=(i+j)/2;
    build(2*node+2,mid+1,j,a,b,tree);
    build(2*node+1,i,mid,a,b,tree);

    ll ans=tree[2*node+1][1]+tree[2*node+2][1]+min(tree[2*node+1][0]+tree[2*node+2][0],tree[2*node+2][2]);
    ll arem=tree[2*node+1][0]+tree[2*node+2][0]-min(tree[2*node+1][0]+tree[2*node+2][0],tree[2*node+2][2]);
    ll prem=tree[2*node+2][2]+tree[2*node+1][2]-min(tree[2*node+1][0]+tree[2*node+2][0],tree[2*node+2][2]);
    tree[node]={arem,ans,prem};
}

void update(int node,int i,int j,vector<vector<ll>>&tree,int in,ll x,ll y)
{
    if(i==j)
    {   
        ll ans=min(x,y);
        ll arem=x-ans;
        ll prem=y-ans;
        tree[node]={arem,ans,prem};
        return;
    }

    ll mid=(i+j)/2;
    if(in<=mid)
    {
        update(2*node+1,i,mid,tree,in,x,y);
    }
    else
    {
        update(2*node+2,mid+1,j,tree,in,x,y);
    }
    ll ans=tree[2*node+1][1]+tree[2*node+2][1]+min(tree[2*node+1][0]+tree[2*node+2][0],tree[2*node+2][2]);
    ll arem=tree[2*node+1][0]+tree[2*node+2][0]-min(tree[2*node+1][0]+tree[2*node+2][0],tree[2*node+2][2]);
    ll prem=tree[2*node+2][2]+tree[2*node+1][2]-min(tree[2*node+1][0]+tree[2*node+2][0],tree[2*node+2][2]);
    tree[node]={arem,ans,prem};
}


void solve()
{
    ll n,q;cin>>n>>q;
    vector<ll>a(n),b(n),c(n-1);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n-1;i++)cin>>c[i];

    vector<vector<ll>> tree(4*n,vector<ll>(3,0));
    build(0,0,n-1,a,b,tree);

    while(q--)
    {
        ll in,x,y,z;cin>>in>>x>>y>>z;
        update(0,0,n-1,tree,in-1,x,y);
        cout<<tree[0][1]<<endl;
    }
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    solve();
    return 0;
}
