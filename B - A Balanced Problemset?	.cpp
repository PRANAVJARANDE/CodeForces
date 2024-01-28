#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll x,n;cin>>x>>n;
    if(x%n==0)
    {
        cout<<(x/n)<<endl;
        return;
    }
    set<ll> s1;
    for(int i=1;i<=sqrtl(x);i++)
    {
        if(x%i==0)
        {
            s1.insert(i);
            s1.insert(x/i);
        }
    }
    ll r=x/n;
    auto itr=s1.lower_bound(r);
    if(*itr>r)
    {
        itr--;
    }
    cout<<*itr<<endl;
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
