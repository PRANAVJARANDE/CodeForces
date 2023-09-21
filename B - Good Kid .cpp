    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        int t;cin >> t;
        while (t--) 
        {
            int n;cin>>n;
            vector<int>v1(n);
            for(int i=0;i<n;i++)
            {
                cin>>v1[i];
            }
            int ans=0;
            for(int i=0;i<n;i++)
            {
                int p=v1[i]+1;
                for(int j=0;j<n;j++)
                {
                    if(i!=j)
                    {
                        p=p*v1[j];
                    }
                }
                ans=max(ans,p);
            }
            cout<<ans<<endl;
        }
        return 0;
    }
