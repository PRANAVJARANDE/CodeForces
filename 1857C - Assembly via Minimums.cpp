#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9)
#define ll long long

void solve()
{
    ll n;cin>>n;
    ll sz=n*(n-1)/2;
    vector<ll> b(sz);
    map<ll,ll> m;
    ll maxi=LLONG_MIN;
    for(int i=0;i<sz;i++)
    {
        cin>>b[i];
        m[b[i]]++;
        maxi=max(maxi,b[i]);
    }
    vector<vector<ll>> v1;
    for(auto x: m) v1.push_back({x.first,x.second});

    sort(v1.begin(),v1.end(),greater<vector<ll>>());
    int in=1;
    for(auto x: v1)
    {
        while(x[1]>0)
        {
            x[1]-=in;
            cout<<x[0]<<" ";
            in++;
        }
    }
    cout<<maxi<<endl;

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
