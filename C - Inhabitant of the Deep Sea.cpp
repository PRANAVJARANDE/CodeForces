#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll fr=(k+1)/2;
    ll br=k/2;
 
    int in=0;
    while(in<n)
    {
        if(fr>=a[in])
        {
            fr-=a[in];
            in++;
        }
        else
        {
            a[in]-=fr;
            break;
        }
    }
    ll ans=in;
 
    int j=n-1;
    while(j>=in)
    {
        if(br>=a[j])
        {
            br-=a[j];
            j--;
        }
        else
        {
            break;
        }
    }
    ans+=n-j-1;
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
