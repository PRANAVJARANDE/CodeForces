#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,c,d;cin>>n>>c>>d;
    vector<ll> a(n*n);
    ll mini=LLONG_MAX;
    for(int i=0;i<n*n;i++)
    {
        cin>>a[i];
        mini=min(mini,a[i]);
    }
    for(int i=0;i<n*n;i++)
    {
        a[i]-=mini;
    }
 
    vector<ll> res;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            res.push_back(i*c+j*d);
        }
    }
 
    sort(a.begin(),a.end());
    sort(res.begin(),res.end());
    if(a==res)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
