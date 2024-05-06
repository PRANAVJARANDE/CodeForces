#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

ll cal(ll k,ll px,vector<ll>&p,vector<ll>&a,vector<ll>&vis)
{
    if(vis[px]==1 || k==0)
    {
        return 0;
    }
    vis[px]=1;
    return max(a[px]*k,a[px]+cal(k-1,p[px],p,a,vis));
}

void solve()
{
    ll n,k,px,py;cin>>n>>k>>px>>py;
    vector<ll> p(n);
    vector<ll> a(n);
    px--;
    py--;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        p[i]--;
    }
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll> vis(n,0),vis1(n,0);
    ll s1=cal(k,px,p,a,vis);
    ll s2=cal(k,py,p,a,vis1);
    //cout<<s1<<" "<<s2<<endl;
    if(s1==s2)
    {
        cout<<"Draw"<<endl;
    }
    else if(s1>s2)
    {
        cout<<"Bodya"<<endl;
    }
    else
    {
        cout<<"Sasha"<<endl;
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
