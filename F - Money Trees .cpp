    #include <bits/stdc++.h>
    using namespace std;
     
    int main() 
    {
        int t;cin >> t;
        while (t--) 
        {
            int n,k;cin>>n>>k;
            vector<int>a(n),h(n);
            for(int i=0;i<n;i++)
                cin>>a[i];
           
            for(int i=0;i<n;i++)
                cin>>h[i];
     
            int l=0,aam=0,ans=0;
            for(int i=0;i<n;i++)
            {
                if(i>0 && h[i-1]%h[i]!=0)
                {
                    aam=0;
                    l=i;
                }
                aam+=a[i];
                while(aam>k)
                {
                    aam-=a[l];
                    l++;
                }
                ans=max(ans,i-l+1);
            }
            
            cout<<ans<<endl;
        }
        return 0;
    }
