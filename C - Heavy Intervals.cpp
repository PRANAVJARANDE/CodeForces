#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<ll>c(n);
    vector<pair<ll,int>> v1;
    for(int i=0;i<n;i++)
    {
        ll k;cin>>k;
        v1.push_back({k,1});
    }
    for(int i=0;i<n;i++)
    {
        ll k;cin>>k;
        v1.push_back({k,2});
    }
    for(int i=0;i<n;i++)cin>>c[i];
    sort(c.begin(),c.end(),greater<ll>());
    sort(v1.begin(),v1.end());

    priority_queue<ll> q1;
    vector<ll> diff;
    for(int i=0;i<2*n;i++)
    {
        if(v1[i].second==1)
        {
            q1.push(v1[i].first);
        }
        else
        {
            diff.push_back(v1[i].first-q1.top());
            q1.pop();
        }
    }

    sort(diff.begin(),diff.end());
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=diff[i]*c[i];
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
