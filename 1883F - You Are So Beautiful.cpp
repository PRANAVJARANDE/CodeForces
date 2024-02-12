#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    map<int,int> m,m1;
    vector<int> psum(n,0);
    m[a[0]]++;
    psum[0]=1;

    for(int i=1;i<n;i++)
    {
        m[a[i]]++;
        if(m[a[i]]==1)
        {
            psum[i]++;
        }
        psum[i]+=psum[i-1];
    }

    ll ans=0;
    for(int i=n-1;i>=0;i--)
    {
        m1[a[i]]++;
        if(m1[a[i]]==1)
        {
            ans+=psum[i];
        }
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
