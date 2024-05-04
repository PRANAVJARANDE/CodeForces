#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    ll k=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')k++;
    }
    if(k%2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
