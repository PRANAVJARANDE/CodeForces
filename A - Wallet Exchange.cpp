#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll a,b;cin>>a>>b;
    ll s=a+b;
    if(s%2==0)
    {
        cout<<"Bob\n";
    }
    else
    {
        cout<<"Alice\n";
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
