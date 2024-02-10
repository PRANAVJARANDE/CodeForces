#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    string s;cin>>s;
    vector<ll> r,b;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')r.push_back(a[i]);
        else b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    int in=1;
    for(ll x: b)
    {
        if(x<in)
        {
            cout<<"NO"<<endl;
            return;
        }
        in++;
    }
    sort(r.begin(),r.end());
    for(ll x: r)
    {
        if(x>in)
        {
            cout<<"NO"<<endl;
            return;
        }
        in++;
    }
    cout<<"YES"<<endl;

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
