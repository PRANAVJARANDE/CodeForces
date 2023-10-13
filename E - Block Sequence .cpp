    #include <bits/stdc++.h>
    using namespace std;
     
    int helper(int in,vector<int>&v1,int n,vector<int>&dp)
    {
        if(in>n)
        {
            return INT_MAX/2;
        }
        if(in==n)
        {
            return 0;
        }
        if(dp[in]!=-1)
            return dp[in];
     
        int op1=1+helper(in+1,v1,n,dp);
        int op2=helper(in+v1[in]+1,v1,n,dp);
        return dp[in]=min(op1,op2);
    }
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
     
        int t;cin >> t;
        while (t--) 
        {
            int n;cin>>n;
            vector<int> v1(n);
            for(int i=0;i<n;i++)cin>>v1[i];
     
            vector<int> dp(n,-1);
     
            cout<<helper(0,v1,n,dp)<<endl;;
            
        }
        return 0;
    }
