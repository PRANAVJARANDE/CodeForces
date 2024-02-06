#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,m,k;cin>>n>>m>>k;
    map<ll,ll> a,b;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        a[temp]++;
    }
    for(int i=0;i<m;i++)
    {
        ll temp;cin>>temp;
        b[temp]++;
    }
    ll a1=0,a2=0;
    ll y=k/2;
    for(int i=1;i<=k;i++)
    {
        if(a[i] && b[i])
        {
            continue;
        }
        else if(a[i])
        {
            a1++;
        }
        else if(b[i])
        {
            a2++;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    if(a1<=y && a2<=y)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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
