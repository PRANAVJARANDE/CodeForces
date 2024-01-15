#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,f,a,b;cin>>n>>f>>a>>b;
    vector<ll>aa(n);
    for(int i=0;i<n;i++)cin>>aa[i];
 
    ll ans=0,in=0;
    for(int i=0;i<n;i++)
    {
        ll op1=(aa[i]-in)*a;
        ll op2=b;
        ans+=min(op1,op2);
        in=aa[i];
    }
    if(ans<f)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
