#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll a1,a2,a3,a4;cin>>a1>>a2>>a3>>a4;
    if(a1==0)
    {
        cout<<"1"<<endl;
        return;
    }
    ll ans=a1+min(a2,a3)*2+min(a1+1,abs(a2-a3)+a4);
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
