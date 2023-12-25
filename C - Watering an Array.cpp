#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long


void solve()
{
    ll n,k,d;cin>>n>>k>>d;
    vector<ll>a(n),v(k);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]--;
    }
    for(int j=0;j<k;j++)
    {
        cin>>v[j];
        v[j]--;
    }

    ll ans=0,x=min(d,2*n);
    for(int cd=0;cd<x;cd++) 
    {
        ll sc=0,ta=v[(cd)%k];
        for(int i=0;i<n;i++)
        {
            if(a[i]==i)
            {
                sc++;
            }
            if(i<=ta)
            {
                a[i]++;
            }
        }    
        sc+=(d-cd-1)/2;
        ans=max(ans,sc);
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
