#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    string s;cin>>s;
    int n=s.size();
    vector<int> psum(n);
    psum[0]=(s[0]=='1');
    for(int i=1;i<n;i++)psum[i]=psum[i-1]+(s[i]=='1');

    ll ans=min(psum[n-1],n-psum[n-1]);
    for(int i=0;i<n;i++)
    {
        ll zp=i-psum[i]+1;
        ll op=psum[i];
        ll oa=psum[n-1]-psum[i];
        ll za=n-i-1-oa;
        ans=min(ans,min(zp+oa,op+za));
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
