#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    vector<ll> psum(n);
    ll sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            cnt++;
        }
        else
        {
            sum+=cnt;
        }
        psum[i]=sum;
    }
    cnt=0,sum=0;
    vector<ll> ssum(n);
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='*')
        {
            cnt++;
        }
        else
        {
            sum+=cnt;
        }
        ssum[i]=sum;
    }
    ll ans=psum[n-1];
    for(int i=0;i<n-1;i++)
    {
        ans=min(ans,psum[i]+ssum[i+1]);
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
