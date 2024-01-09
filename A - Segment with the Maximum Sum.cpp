#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void build(int node,int i,int j,vector<ll>&a,vector<vector<ll>>&tree)
{
    if(i==j)
    {
        tree[node]={a[i],a[i],a[i],a[i]};
        return;
    }
    ll mid=(i+j)/2;
    build(2*node+2,mid+1,j,a,tree);
    build(2*node+1,i,mid,a,tree);

    ll psum=max(tree[2*node+1][0],tree[2*node+1][3]+tree[2*node+2][0]);
    ll ssum=max(tree[2*node+2][1],tree[2*node+2][3]+tree[2*node+1][1]);
    ll ans=max(tree[2*node+1][2],max(tree[2*node+2][2],tree[2*node+1][1]+tree[2*node+2][0]));
    ll sum=tree[2*node+1][3]+tree[2*node+2][3];
    tree[node]={psum,ssum,ans,sum};
}

ll query(vector<vector<ll>>&tree)
{
    return tree[0][2];
}

void update(int node,int i,int j,vector<ll>&a,vector<vector<ll>>&tree,int in,ll val)
{
    if(i==j)
    {
        a[in]=val;
        tree[node]={val,val,val,val};
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

    ll psum=max(tree[2*node+1][0],tree[2*node+1][3]+tree[2*node+2][0]);
    ll ssum=max(tree[2*node+2][1],tree[2*node+2][3]+tree[2*node+1][1]);
    ll ans=max(tree[2*node+1][2],max(tree[2*node+2][2],tree[2*node+1][1]+tree[2*node+2][0]));
    ll sum=tree[2*node+1][3]+tree[2*node+2][3];
    tree[node]={psum,ssum,ans,sum};
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int n,m;cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<vector<ll>>tree(4*n,vector<ll>(4,0));
    build(0,0,n-1,a,tree);
    ll ans=query(tree);
        if(ans<0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    while(m--)
    {
        int in,val;cin>>in>>val;
        update(0,0,n-1,a,tree,in,val);
        ll ans=query(tree);
        if(ans<0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
    }
    return 0;
}
