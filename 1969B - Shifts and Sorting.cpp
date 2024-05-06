#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    string s;cin>>s;
    int n=s.size();
    ll ans=0;
    int oc=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')oc++;
        if(oc==0)continue;
        if(s[i]=='0')
        {
            ans+=oc+1;
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
