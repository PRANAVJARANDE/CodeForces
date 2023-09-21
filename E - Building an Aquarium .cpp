    #include <bits/stdc++.h>
    using namespace std;
     
    int getsum(vector<int>&v1,int m)
    {
        long long a=0;
        int n=v1.size();
        for(int i=0;i<n;i++)
        {
            if(v1[i]<m)
                a+=(long long)m-(long long)v1[i];
        }
        if(a>INT_MAX)
        {
            return INT_MAX;
        }
        return a;
    }
     
    int main() 
    {
        int t;cin >> t;
        while (t--) 
        {
            int n,x;cin>>n>>x;
            vector<int>v1(n);
            int l=INT_MAX;
            for(int i=0;i<n;i++)
            {
                cin>>v1[i];
                l=min(l,v1[i]);
            }
            if(n==1)
            {
                cout<<l+x<<endl;
                continue;
            }
            int r=INT_MAX;
            int ans=l;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                int gs=getsum(v1,mid);
                if(gs>x)
                {
                    r=mid-1;
                }
                else
                {
                    ans=mid;
                    l=mid+1;
                }
            }
            cout<<ans<<endl;
        }
        return 0;
    }
