#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<int> vis(n,0);
    for(int i=0;i<n;i++)
    {
        if(a[i]<n)vis[a[i]]=1;
    }

    ll m=0;
    for(;m<n;m++)
    {
        if(vis[m]==0)
        {
            break;
        }
    }
    ll ta=m+1;
    if(ta>n)
    {
        cout<<"No"<<endl;
        return;
    }

    vector<int> v(ta,0);
    for(int i=0;i<n && a[i]!=ta;i++)
    {
        if(a[i]<ta)v[a[i]]=1;
    }

    for(int i=n-1;i>=0 && a[i]!=ta;i--)
    {
        if(a[i]<ta)v[a[i]]=1;
    }

    int c=0;
    for(int x:v)
    {
        if(x==0)c++;
    }
    if(c==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
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
