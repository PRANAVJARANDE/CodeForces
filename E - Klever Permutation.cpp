#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,k;cin>>n>>k;
    vector<ll> ans(n+1,0);
    vector<ll> ans1(n+1,0);
 
    //m1
    ll in=n;
    for(int i=1;i<=k;i+=2)
    {
        for(int j=i;j<=n;j+=k)
        {
            ans[j]=in;
            in--;
        }
    }
    in=1;
    for(int i=2;i<=k;i+=2)
    {
        for(int j=i;j<=n;j+=k)
        {
            ans[j]=in;
            in++;
        }
    }
 
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
