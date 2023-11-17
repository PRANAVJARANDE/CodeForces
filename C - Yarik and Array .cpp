    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
        int t;cin >> t;
        while (t--) 
        {
            int n;cin>>n;
            vector<int>nums(n);
            int ans=INT_MIN;
            bool bl=0;
            for(int i=0;i<n;i++)
            {
                cin>>nums[i];
                ans=max(ans,nums[i]);
                if(nums[i]>0)
                {
                    bl=1;
                }
            }
            if(bl==0)
            {
                cout<<ans<<endl;
                continue;
            }
     
            int csum=0;
            for(int i=0;i<n;i++)
            {
                csum+=nums[i];
                
     
                if(i+1<n)
                {
                    int p1=abs(nums[i]);
                    int p2=abs(nums[i+1]);
                    p1=p1%2;
                    p2=p2%2;
                    if(p1==p2)
                    {
                        ans=max(ans,csum);
                        csum=0;
                        continue;
                    }
                }
                if(csum<0)
                {
                    csum=0;
                }
                ans=max(ans,csum);
            }
            cout<<ans<<endl;
        }
        return 0;
    }
