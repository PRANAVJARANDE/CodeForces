#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    unordered_map<char,ll>m;
    ll mf=INT_MIN;
    for(char x: s)
    {
        mf=max(mf,++m[x]);
    }
    ll rst=n-mf;

    if(rst>mf)
    {
        cout<<(int)n%2<<endl;
    }
    else 
    {
        cout<<mf-rst<<endl;
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
