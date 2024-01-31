#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    if(n%2==1)
    {
        ll tot=0;
        for(int i=1;i<n-1;i+=2)
        {
            tot+=max(0ll,max(a[i+1],a[i-1])-a[i]+1);                    
        }
        cout<<tot<<endl;
    }
    else
    {
        ll sum=0;
        for(int i=1;i<n-1;i+=2)
        {
            sum+=max(0ll,max(a[i+1],a[i-1])-a[i]+1);
        }
        ll ans=sum;
        for(int i=n-2;i>0;i-=2)
        {
            sum-=max(0ll,max(a[i],a[i-2])-a[i-1]+1);
            sum+=max(0ll,max(a[i+1],a[i-1])-a[i]+1);
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
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
