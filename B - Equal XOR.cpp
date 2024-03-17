#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll>a(2*n);
    for(int i=0;i<2*n;i++)cin>>a[i];
 
    map<ll,ll> m1,m2;
    for(int i=0;i<n;i++)
    {
        m1[a[i]]++;
    }
    for(int i=n;i<2*n;i++)
    {
        m2[a[i]]++;
    }
 
    vector<ll>v11,v12;
    for(auto x: m1)
    {
        if(x.second==2)v12.push_back(x.first);
        else v11.push_back(x.first);
    }
    vector<ll>v21,v22;
    for(auto x: m2)
    {
        if(x.second==2)v22.push_back(x.first);
        else v21.push_back(x.first);
    }
 
    vector<ll> l,r;
    for(int i=0;i<v12.size() && k!=0;i++)
    {
        l.push_back(v12[i]);
        l.push_back(v12[i]);
        r.push_back(v22[i]);
        r.push_back(v22[i]);
        k--;
    }
 
    for(int i=0;i<v11.size()-1 && k!=0;i+=2)
    {
        l.push_back(v11[i]);
        l.push_back(v11[i+1]);
        r.push_back(v21[i]);
        r.push_back(v21[i+1]);
        k--;
    }
 
    for(ll x: l)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(ll x: r)
    {
        cout<<x<<" ";
    }
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
