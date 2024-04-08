#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n,a,b;cin>>n>>a>>b;
    int p=n/2;
    int ans=(n%2)*a;
    if(2*a<b)
    {
        ans+=a*2*p;
    }
    else
    {
        ans+=p*b;
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
