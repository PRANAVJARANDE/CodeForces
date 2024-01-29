#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

bool helper(int x,int y,vector<string>&c,vector<vector<int>>&dp,int m)
{
    if(y>=m)
    {
        return 1;
    }

    if(dp[x][y]!=-1)
        return dp[x][y];

    if(c[x][y]=='W')
    {
        return dp[x][y]=0;
    }

    if(x==0)
    {
        if(c[1][y]=='B')
        {
            return dp[x][y]=helper(1,y+1,c,dp,m);
        }
        else
        {
            return dp[x][y]=helper(0,y+1,c,dp,m);
        }
    }
    else
    {
        if(c[0][y]=='B')
        {
            return dp[x][y]=helper(0,y+1,c,dp,m);
        }
        else
        {
            return dp[x][y]=helper(1,y+1,c,dp,m);
        }
    }
}

void solve()
{
    ll m;cin>>m;
    vector<string> c;
    string a,b;cin>>a>>b;
    c.push_back(a);
    c.push_back(b);
    vector<vector<int>> dp1(2,vector<int>(m+1,-1));
    bool ans1=helper(0,0,c,dp1,m);
    vector<vector<int>> dp2(2,vector<int>(m+1,-1));
    bool ans2=helper(1,0,c,dp2,m);
    if(ans1 || ans2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
