#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    string f;cin>>f;
 
    ll a1=0,a2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && f[i]=='1')
        {
            a1++;
        }
        if(s[i]=='1' && f[i]=='0')
        {
            a2++;
        }
    }
    cout<<max(a1,a2)<<endl;
 
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
