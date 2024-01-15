#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
 
 
 
 
void solve()
{
    vector<vector<int>> v1;
    for(int i=0;i<4;i++)
    {
        int a,b;cin>>a>>b;
        v1.push_back({a,b});
    }
 
    sort(v1.begin(),v1.end());
    int s1=abs(v1[0][1]-v1[1][1]);
    ll ans=s1*s1;
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
