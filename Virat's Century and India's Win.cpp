#include <bits/stdc++.h>
using namespace std;
#define MOD (long long)(1e9 + 7)
#define ll long long

long long fast_pow(long long a,long long p) {
  long long res = 1;
  while (p) {
    if(p%2==0){
      a=(a*a)%MOD;
      p/=2;
    }
    else{
      res=(res*a)%MOD;
      p--;
    }
  }
  return res;
}

ll inv;
ll dp[151][61][11][101][2];
ll helper(ll n,ll b,ll w,ll x,bool strike)
{
    if(n<0)n=0;
    if(x<0)x=0;
    if(dp[n][b][w][x][strike]!=-1)return dp[n][b][w][x][strike];
    if(n==0 && x==0)return 1;
    if(b==0 || n==0 || w==0)return 0;

    dp[n][b][w][x][strike]=0;
    if(strike==1)
    {
        //virat on strike 
        ll nb=b;
        nb--;
        bool cs=1;
        if(nb%6==0)
        {
            cs=0;
        }
        if(x==0)
        {
            dp[n][b][w][x][strike]+=((helper(n,nb,w-1,x,cs))%MOD)*inv;  //virat out after 100
        }
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-1,nb,w,x-1,!cs)%MOD)*inv)%MOD;  //1 run
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-2,nb,w,x-2,cs)%MOD)*inv)%MOD;   //2 run
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-3,nb,w,x-3,!cs)%MOD)*inv)%MOD;  //3 run
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-4,nb,w,x-4,cs)%MOD)*inv)%MOD;   //4 run
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-6,nb,w,x-6,cs)%MOD)*inv)%MOD;   //6 run
        dp[n][b][w][x][strike]%=MOD;

        return dp[n][b][w][x][strike];
    }
    else
    {
        //virat on nonstrike
        ll nb=b;
        nb--;
        bool cs=0;
        if(nb%6==0)
        {
            cs=1;
        }
        dp[n][b][w][x][strike]+=((helper(n,nb,w-1,x,cs)%MOD)*inv)%MOD;   //out
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-1,nb,w,x,!cs)%MOD)*inv)%MOD;    //1 run
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-2,nb,w,x,cs)%MOD)*inv)%MOD;     //2 run
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-3,nb,w,x,!cs)%MOD)*inv)%MOD;    //3 run
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-4,nb,w,x,cs)%MOD)*inv)%MOD;     //4 run
        dp[n][b][w][x][strike]%=MOD;
        dp[n][b][w][x][strike]+=((helper(n-6,nb,w,x,cs)%MOD)*inv)%MOD;     //6 run
        dp[n][b][w][x][strike]%=MOD;
        return dp[n][b][w][x][strike];
    }
}   

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    inv=fast_pow(6,MOD-2);
    int t;cin>>t;
    while(t--)
    {
        int n,b,w,x;cin>>n>>b>>w>>x;
        memset(dp, -1, sizeof(dp));
        ll ans=helper(n,b,10-w,100-x,1);
        cout<<ans<<endl;
    }
    return 0;
}
