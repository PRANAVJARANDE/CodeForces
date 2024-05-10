#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

ll m,n;
vector<ll>s,l;
vector<vector<ll>>dp;
ll helper(int in,ll n)
{
    if(n==0)return 1;
    if(dp[in][n]!=-1)return dp[in][n];
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        ll cnt=s[in]*s[i]+s[in]*l[i]+l[in]*s[i];
        ans=ans+(cnt*helper(i,n-1));            
    }
    return dp[in][n]=ans;
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    cin>>m>>n;
    s.resize(m),l.resize(m);
    dp.resize(m+1,n+1);
    for(int i=0;i<m;i++)cin>>s[i];
    for(int i=0;i<m;i++)cin>>l[i];
    ll ans=helper(0,n);
    cout<<ans<<endl;
    return 0;
}
