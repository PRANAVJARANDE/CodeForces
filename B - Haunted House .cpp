    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
        int t;cin >> t;
        while (t--) 
        {
            long long n;cin>>n;
            string s;cin>>s;
            vector<long long>dp(n,-1);
            reverse(s.begin(),s.end());
            
            vector<int>zp;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    zp.push_back(i);
                }
            }
     
            long long ans=0;
            for(int i=0;i<zp.size();i++)
            {
                ans+=zp[i]-i;
                dp[i]=ans;
            }
     
            for(long long x: dp)
            {
                cout<<x<<" ";
            }
            cout<<endl;       
        }
        return 0;
    }
