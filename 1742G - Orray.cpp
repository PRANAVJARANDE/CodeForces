#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

bool getbit(ll n,int i)
{
    return n & (1<<i);
}

void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end(),greater<ll>());
    vector<ll> vis(n,0),res;
    ll cor=0;
    for(int i=0;i<31;i++)
    {   
        int in=-1;
        ll maxi=0;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==0)
            {
                if((cor | a[j])>maxi)
                {
                    maxi=cor | a[j];
                    in=j;
                }
            }
        }
        if(in!=-1)
        {
            res.push_back(a[in]);
            vis[in]=1;
            cor=maxi;
        }
    }

    for(ll x: res)cout<<x<<" ";
    for(int i=0;i<n;i++) if(vis[i]==0)cout<<a[i]<<" ";
    cout<<endl;
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
