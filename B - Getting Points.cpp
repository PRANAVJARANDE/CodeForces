#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,p,l,t;cin>>n>>p>>l>>t;
    ll piday=l+2LL*t;
    ll availabletasks=ceil(double(n)/7.0);
    ll mc=availabletasks/2;
    if(piday*mc>=p)
    {
        ll rs=ceil(double(p)/double(piday));
        cout<<n-rs<<endl;
    }
    else
    {
        ll remp=p-piday*mc;
        if(availabletasks%2)
        {
            remp-=(t+l);
            mc++;
        }
        ll more=0;
        if(remp>0)
        {
            more=ceil(double(remp)/double(l));
        }
        else
        {
            more=0;
        }
        cout<<n-(more+mc)<<endl;
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
