#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }

    if(n<3)
    {   
        cout<<"0"<<endl;
        return;
    }
 
    ll ans=0;
    ll sum=0;
    for(auto x: m)
    {
        int y=x.second;
        ans += 1ll * y * (y - 1) * (y - 2) / 6;
        ans += 1ll * y * (y - 1) / 2 * sum;
        sum+=x.second;
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
