#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    unordered_map<char,int> m;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
        ans+=(ll)m.size();
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
