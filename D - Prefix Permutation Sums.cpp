#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
typedef long long ll;

void solve()
{
    ll n;cin>>n;
    ll prev=0,a;
    set<ll> s1;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        if(a-prev<=n)s1.insert(a-prev);
        prev=a;
    }
    ll s=(n+1)*n/2;
    if(a==s)
    {
        if(s1.size()==n-2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        if(s1.size()==n-1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
