    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long
     
    void solve()
    {
        int n;cin>>n;
        vector<ll> v1(n);
        for(int i=0;i<n;i++)
            cin>>v1[i];
        
        int q;cin>>q;
     
        vector<vector<int>> bt(n+1,vector<int>(32,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<32;j++)
            {
                if(v1[i] & (1<<j))
                {
                    bt[i+1][j]=1+bt[i][j];
                }
                else
                {
                    bt[i+1][j]=bt[i][j];
                }
            }
        }
     
        while(q--)
        {
            int k,l;cin>>l>>k;
            if(v1[l-1]<k)
            {
                cout<<"-1 ";
                continue;
            }
            int lo=l,hi=n;
            int ans=l-1;
            while(lo<=hi)
            {
                int mid=lo+(hi-lo)/2;
                int num=0;
                for(int i=0;i<32;i++)
                {
                    if(bt[mid][i]-bt[l-1][i]==mid-l+1)
                    {
                        num+=(1<<i);
                    }
                }
                if(num>=k)
                {
                    lo=mid+1;
                    ans=max(lo,ans);
                }
                else
                {
                    hi=mid-1;
                }
            }
            cout<<ans-1<<" ";
        }
     
     
     
        cout<<endl;
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
