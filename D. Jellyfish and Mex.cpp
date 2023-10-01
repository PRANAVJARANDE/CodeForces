#include <bits/stdc++.h>
using namespace std;

long long solve(int mex,unordered_map<int,int> &m,vector<long long>&dp)
{
    if(mex==0)
        return 0;

    if(dp[mex]!=-1)
        return dp[mex];
    
    long long ans=INT_MAX;
    for(int i=0;i<mex;i++)
        ans=min(ans, solve(i,m,dp) + m[i]*mex);
    
    return dp[mex]=ans;
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n;
        unordered_map<int,int> m;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int h;cin>>h;
            m[h]++;
        }
        int mex=0;
        for(int i=0;i<=n;i++)
        {
            if(m.find(i)!=m.end())
            {
                mex++;
            }
            else
            {
                break;
            }
        }
        if(mex==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        vector<long long> dp(mex+1,-1);
        cout<<solve(mex,m,dp)-mex<<endl;
    }
    return 0;
}
