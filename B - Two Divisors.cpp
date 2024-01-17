#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

long long lcm(long long a, long long b) 
{
    return abs(a * b) / __gcd(a,b);
}

void solve()
{
    ll a,b;cin>>a>>b;
    if(b%a==0)
    {
        cout<<(b*b)/a<<endl;
    }
    else
    {
        ll ans=lcm(a,b);
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
