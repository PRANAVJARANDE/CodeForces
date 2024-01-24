#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,c,d;cin>>n>>c>>d;
    vector<ll> a;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        m[temp]++;
        if(m[temp]==1)
        {
            a.push_back(temp);
        }
    }
    sort(a.begin(),a.end());
    ll ans=d+n*c;
    for(int i=0;i<a.size();i++)
    {
        ans=min(ans,(a[i]-i-1)*d+(n-i-1)*c);
    }
    cout<<ans<<endl;
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
