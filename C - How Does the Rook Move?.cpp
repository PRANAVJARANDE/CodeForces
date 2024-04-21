#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

ll helper(int n,vector<ll>&dp)
{
    if(n==0)return 1;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    ll a1=helper(n-1,dp)%MOD;
    ll a2=((helper(n-2,dp)%MOD)*(2*(n-1)))%MOD;
    ll ans=(a1+a2)%MOD;
    return dp[n]=ans;
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    ll maxi=3*100000;
    vector<ll>dp(maxi+1,-1);
    while (t--) 
    {
        ll n,k;cin>>n>>k;
        ll cov=0;
        for(int i=0;i<k;i++)
        {
            ll a,b;cin>>a>>b;
            if(a==b)cov++;
            else cov+=2;
        }
        ll tc=n-cov;
        cout<<helper(tc,dp)<<endl;
    }
    return 0;
}
