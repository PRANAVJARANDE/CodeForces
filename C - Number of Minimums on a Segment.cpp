#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void build(int node,int i,int j,vector<ll>&a,vector<pair<ll,ll>>&tree)
{
    if(i==j)
    {
        tree[node].first=a[i];
        tree[node].second=1;
        return;
    }
    ll mid=(i+j)/2;
    build(2*node+2,mid+1,j,a,tree);
    build(2*node+1,i,mid,a,tree);

    if(tree[2*node+1].first<tree[2*node+2].first)
    {
        tree[node].first=tree[2*node+1].first;
        tree[node].second=tree[2*node+1].second;
    }
    else if(tree[2*node+1].first>tree[2*node+2].first)
    {
        tree[node].first=tree[2*node+2].first;
        tree[node].second=tree[2*node+2].second;
    }
    else
    {
        tree[node].first=tree[2*node+1].first;
        tree[node].second=tree[2*node+1].second+tree[2*node+2].second;
    }
}

pair<ll,ll> query(int node,int i,int j,vector<pair<ll,ll>>&tree,int l,int r)
{
    if(i>r || j<l)
        return {LLONG_MAX,-1};

    if(l<=i && j<=r)
        return tree[node];
    
    ll mid=(i+j)/2;
    pair<ll,ll> q1=query(2*node+1,i,mid,tree,l,r);
    pair<ll,ll> q2=query(2*node+2,mid+1,j,tree,l,r);
    pair<ll,ll> q;
    if(q1.first<q2.first)
    {
        q=q1;
    }
    else if(q1.first>q2.first)
    {
        q=q2;
    }
    else
    {
        q.first=q1.first;
        q.second=q1.second+q2.second;
    }
    return q;
}

void update(int node,int i,int j,vector<ll>&a,vector<pair<ll,ll>>&tree,int in,ll val)
{
    if(i==j)
    {
        a[i]=val;
        tree[node].first=val;
        tree[node].second=1;
        return;
    }

    ll mid=(i+j)/2;
    if(in<=mid)
    {
        update(2*node+1,i,mid,a,tree,in,val);
    }
    else
    {
        update(2*node+2,mid+1,j,a,tree,in,val);
    }

    if(tree[2*node+1].first<tree[2*node+2].first)
    {
        tree[node].first=tree[2*node+1].first;
        tree[node].second=tree[2*node+1].second;
    }
    else if(tree[2*node+1].first>tree[2*node+2].first)
    {
        tree[node].first=tree[2*node+2].first;
        tree[node].second=tree[2*node+2].second;
    }
    else
    {
        tree[node].first=tree[2*node+1].first;
        tree[node].second=tree[2*node+1].second+tree[2*node+2].second;
    }
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    ll n,m;cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<pair<ll,ll>>tree(4*n);
    build(0,0,n-1,a,tree);
    while(m--)
    {
        int h;cin>>h;
        if(h==1)
        {
            ll i,v;cin>>i>>v;
            update(0,0,n-1,a,tree,i,v);
        }
        else
        {
            ll l,r;cin>>l>>r;
            pair<ll,ll> ans=query(0,0,n-1,tree,l,r);
            cout<<ans.first<<" "<<ans.second<<endl;
        }
    }
    return 0;
}
