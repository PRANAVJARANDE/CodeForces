#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    unordered_map<char,int> m;
    for(char x: s)
    {
        m[x]++;
    }
 
    int ans=0;
    for(auto x: m)
    {
        int in=x.first-'A'+1;
        if(x.second>=in)
        {
            ans++;
        }
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
