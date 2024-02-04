#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k,g;cin>>n>>k>>g;
    ll val=k*g;
    ll sf=(g-1)/2;
    ll prf;
    if(sf==0)
    {
        prf=0;
    }
    else
    {
        prf=min(val/sf,n-1)*sf;
    }
    ll rem=val-prf;
    if(rem%g<=sf)
    {
        prf+=rem%g;
    }
    else{
        prf-=(g-rem%g);
    }
    cout<<prf<<endl;
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
