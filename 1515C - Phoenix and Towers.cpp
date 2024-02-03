#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,m,x;cin>>n>>m>>x;
    vector<vector<ll>> a;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        a.push_back({temp,i});
    }
    sort(a.begin(),a.end(),greater<vector<ll>>());
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q1;
    vector<ll> res(n,0);
    for(int i=0;i<m;i++)
    {
        q1.push({a[i][0],i+1});
        res[a[i][1]]=i+1;
    } 

    for(int i=m;i<n;i++)
    {
        ll k=q1.top().first;
        ll in=q1.top().second;
        q1.pop();
        k+=a[i][0];
        res[a[i][1]]=in;
        q1.push({k,in});
    }

    ll maxi=INT_MIN,mini=INT_MAX;
    while(!q1.empty())
    {
        ll k=q1.top().first;
        maxi=max(maxi,k);
        mini=min(mini,k);
        q1.pop();
    }

    if(maxi-mini<=x)
    {
        cout<<"YES"<<endl;
        for(ll x: res)
        {
            cout<<x<<" ";
        }
        cout<<endl;
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
