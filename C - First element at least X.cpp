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
    tree[node]=max(tree[2*node+2],tree[2*node+1]);
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
        return query(2*node+2,mid+1,j,tree,k);
    }
}

void update(int node,int i,int j,vector<ll>&a,vector<ll>&tree,int in,int val)
{
    if(i==j)
    {
        a[i]=val;
        tree[node]=val;
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
    tree[node]=max(tree[2*node+2],tree[2*node+1]);
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
            int i,v;cin>>i>>v;
            update(0,0,n-1,a,tree,i,v);   
        }
        else
        {
            int k;cin>>k;
            if(k>tree[0])
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<query(0,0,n-1,tree,k)<<endl;  
            }
        }
    }


    return 0;
}
