#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void build(int node,int i,int j,vector<ll>&tree)
{
	if(i==j)
	{
		tree[node]=1;
		return;
	}
	ll mid=(i+j)/2;
	build(2*node+1,i,mid,tree);
	build(2*node+2,mid+1,j,tree);
	tree[node]=tree[2*node+2]+tree[2*node+1];
}

ll update(int node,int i,int j,vector<ll>&tree,int in)
{
	if(i==j)
	{
		tree[node]=0;
		return 0;
	}

	ll mid=(i+j)/2;
	ll ans=0;
	if(in<=mid)
	{
		ans=update(2*node+1,i,mid,tree,in);
	}
	else
	{
		ans=tree[2*node+1]+update(2*node+2,mid+1,j,tree,in);
	}
	tree[node]=tree[2*node+1]+tree[2*node+2];
	return ans;
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int n;cin>>n;
    vector<ll>a(2*n);
    for(int i=0;i<2*n;i++)cin>>a[i];
    vector<int> st,en;
    map<int,int> m;
    map<int,int>dist;
    for(int i=0;i<2*n;i++)
    {
        m[a[i]]++;
        if(m[a[i]]==1)
        {
            dist[a[i]]=i;
            st.push_back(a[i]);
        }
        else
        {
            dist[a[i]]=i-dist[a[i]]-1;
            en.push_back(a[i]);
        }
    }

    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[en[i]]=i;
    }

    vector<ll> tree(4*n);
    build(0,0,n-1,tree);
    vector<ll> ans(n+1,0);
    for(int i=0;i<n;i++)
    {
        int in=mp[st[i]];
        ans[st[i]]=update(0,0,n-1,tree,in);
    }
    for(int i=1;i<=n;i++)
    {
        ll jk=dist[i]-2*ans[i];
        cout<<jk<<" ";
    }
    cout<<endl;

    return 0;
}
