#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void build(int node,int i,int j,vector<ll>&a,vector<ll>&tree)
{
    if(i==j)
    {
        tree[node]=a[i];
        return;
    }
    ll mid=(i+j)/2;
    build(2*node+2,mid+1,j,a,tree);
    build(2*node+1,i,mid,a,tree);
    tree[node]=tree[2*node+2]+tree[2*node+1];
}

ll query(int node,int i,int j,vector<ll>&tree,int k)
{
    if(i==j)
    {
        return i;
    }

    ll mid=(i+j)/2;
    if(tree[2*node+1]>=k)
    {
        return query(2*node+1,i,mid,tree,k);
    }
    else
    {
        return query(2*node+2,mid+1,j,tree,k-tree[2*node+1]);
    }
}

void update(int node,int i,int j,vector<ll>&a,vector<ll>&tree,int in)
{
    if(i==j)
    {
        if(a[i]==1)
        {
            a[i]=0;
            tree[node]=0;
        }
        else
        {
            a[i]=1;
            tree[node]=1;
        }
        return;
    }

    ll mid=(i+j)/2;
    if(in<=mid)
    {
        update(2*node+1,i,mid,a,tree,in);
    }
    else
    {
        update(2*node+2,mid+1,j,a,tree,in);
    }
    tree[node]=tree[2*node+2]+tree[2*node+1];
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int n,m;cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll>tree(4*n);
    build(0,0,n-1,a,tree);
    while(m--)
    {
        int as;cin>>as;
        if(as==1)
        {
            int i;cin>>i;
            update(0,0,n-1,a,tree,i);
        }
        else
        {
            int k;cin>>k;
            cout<<query(0,0,n-1,tree,k+1)<<endl;
        }
    }


    return 0;
}
