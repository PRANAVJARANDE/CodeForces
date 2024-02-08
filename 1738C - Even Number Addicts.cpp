#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
 
bool helper(bool ch,ll e,ll o,bool s,vector<vector<vector<vector<int>>>>&dp)
{
    if(!o && !e)
    {
        if(s)return 0;
        return 1;
    }
 
    if(dp[ch][e][o][s]!=-1)
        return dp[ch][e][o][s];
 
    if(ch==0)
    {
        //alcie
        bool op1=0,op2=0;
        if(e)op1=helper(1,e-1,o,s,dp);
        if(o) op2=helper(1,e,o-1,!s,dp);
        return dp[ch][e][o][s]=op1 || op2;
    }
    else
    {
        //bob
        bool op1=1,op2=1;
        if(e)op1=helper(0,e-1,o,s,dp);
        if(o)op2=helper(0,e,o-1,s,dp);
        return dp[ch][e][o][s]=op1 && op2;
    }
}
 
 
void solve()
{
    ll n;cin>>n;
    ll e=0,o=0;
    for(int i=0;i<n;i++)
    {
        ll temp;cin>>temp;
        if(temp%2==0)e++;
        else o++;
    }
    vector<vector<vector<vector<int>>>> dp(2,vector<vector<vector<int>>>(e+1,vector<vector<int>>(o+1,vector<int>(2,-1))));
    bool ans=helper(0,e,o,0,dp);
    if(ans)
    {
        cout<<"Alice"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
    }
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
