#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    vector<int> zc(n+1,0);
    vector<int> oc(n+1,0);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i-1]=='0')cnt++;
        zc[i]=cnt;
    }
    cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1')cnt++;
        oc[i]=cnt;
    }
    int ans=0;
    int mini=INT_MAX;
    for(int i=0;i<=n;i++)
    {
        int ap=n-i;
        ap++;
        ap/=2;
        if(zc[i]>=(i+1)/2 && oc[i]>=ap)
        {
            int up=abs(n-2*i);
            if(up<mini)
            {
                ans=i;
                mini=up;
            }
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
