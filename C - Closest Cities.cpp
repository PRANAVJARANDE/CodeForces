#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int m;cin>>m;
 
    vector<ll>psum(n,0),ssum(n,0);
    ll bsum=LLONG_MAX;
    for(int i=1;i<n;i++)
    {
        ll fsum=a[i]-a[i-1];
        if(bsum>fsum)
        {
            psum[i]=psum[i-1]+1;
        }
        else
        {
            psum[i]=psum[i-1]+fsum;
        }
        bsum=fsum;
    }
    bsum=LLONG_MAX;
    for(int i=n-2;i>=0;i--)
    {
        ll fsum=a[i+1]-a[i];
        if(bsum>fsum)
        {
            ssum[i]=ssum[i+1]+1;
        }
        else
        {
            ssum[i]=ssum[i+1]+fsum;
        }
        bsum=fsum;
    }
 
 
    while(m--)
    {
        int a,b;cin>>a>>b;
        a--,b--;
        if(a<b)
        {
            ll ans=psum[b]-psum[a];
            cout<<ans<<endl;
        }
        else
        {
            ll ans=ssum[b]-ssum[a];
            cout<<ans<<endl;
        }
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
