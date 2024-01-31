#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,w;cin>>n>>w;
    vector<vector<ll>> a;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        a.push_back({temp,i+1});
    }
    sort(a.begin(),a.end());
    ll mw=w/2;
    mw+=w%2;
    ll l=0;
    ll cw=0;
    for(int i=0;i<n;i++)
    {
        cw+=a[i][0];
        while(cw>w)
        {
            cw-=a[l][0];
            l++;
        }
        if(cw>=mw)
        {
            cout<<i-l+1<<endl;
            for(int j=l;j<=i;j++)
            {
                cout<<a[j][1]<<" ";
            }
            cout<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
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
