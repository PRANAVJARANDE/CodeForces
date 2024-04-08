#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>a(n),b(m);
    map<ll,ll> cnt1,cnt2;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        cnt2[b[i]]++;
    }
 
    int ma=0;
    for(int i=0;i<m;i++)
    {
        if(cnt2.find(a[i])!=cnt2.end())
        {
            cnt1[a[i]]++;
            if(cnt1[a[i]]<=cnt2[a[i]])
            {
                ma++;
            }
        }
    }
 
 
    ll ans=0;
    
    for(int i=m;i<n;i++)
    {
        if(ma>=k)ans++;
        if(cnt2.find(a[i-m])!=cnt2.end())
        {
            if(cnt1[a[i-m]]<=cnt2[a[i-m]])ma--;  
            cnt1[a[i-m]]--;
        }
        if(cnt2.find(a[i])!=cnt2.end())
        {
            cnt1[a[i]]++;
            if(cnt1[a[i]]<=cnt2[a[i]])ma++;
        }
        
    }
    if(ma>=k)ans++;
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
