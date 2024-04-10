#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    vector<vector<vector<ll>>>dp(201,vector<vector<ll>>(201,vector<ll>(201,0)));
    for(int i=0;i<201;i++)
    {
        for(int j=0;j<201;j++)
        {
            for(int k=0;k<201;k++)
            {
                dp[i][j][k]=0;
                if(i)dp[i][j][k]=max(dp[i][j][k],dp[i-1][j][k]);
                if(j)dp[i][j][k]=max(dp[i][j][k],dp[i][j-1][k]);
                if(k)dp[i][j][k]=max(dp[i][j][k],dp[i][j][k-1]);
                int xc= ((i & 1) * 1) ^ ((j & 1) * 2) ^ ((k & 1) * 3);
                if(xc==0  && (i || j || k))dp[i][j][k]++;
            }
        }
    }

    while (t--) 
    {
        int a,b,c,d;cin>>a>>b>>c>>d;
        ll ans=dp[a][b][c]+(d/2);
        cout<<ans<<endl;
    }
    return 0;
}
