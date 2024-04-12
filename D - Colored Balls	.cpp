#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(998244353)
#define ll long long
 
int n;
ll helper(int in,ll s,vector<ll>&a,vector<vector<ll>>&dp)
{
    if(in>=n)return 0;
    if(dp[in][s]!=-1)return dp[in][s]%MOD;
    //take
    ll x=s+a[in];
    x=(x+1)/2;
    ll op1=(max(a[in],x)+(helper(in+1,s+a[in],a,dp)%MOD))%MOD;
    //ntake
    ll op2=helper(in+1,s,a,dp)%MOD;
    return dp[in][s]=(op1+op2)%MOD;
}
 
int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    cin>>n;
    vector<ll> a(n);
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }    
    sort(a.begin(),a.end());
    vector<vector<ll>> dp(n,vector<ll>(s+1,-1));
    ll ans=helper(0,0,a,dp)%MOD;
    cout<<ans<<endl;
    return 0;
}
