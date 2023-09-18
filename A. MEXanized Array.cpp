    #include <bits/stdc++.h>
    using namespace std;
     
    long long getsum(int k)
    {
        return (k*(k-1))/2;
    }
     
     
    int main() 
    {
        long long t;cin >> t;
        while (t--) 
        {
            int n,k,x;cin>>n>>k>>x;
            if(k>n || x<k-1)
            {
                cout<<"-1"<<endl;
                continue;
            }
            long long ans=0;
            ans+=getsum(k);
     
            if(k==x)
            {
                ans+=(n-k)*(x-1);
            }
            else
            {
                ans+=(n-k)*x;
            }
            cout<<ans<<endl;
            
        }
        return 0;
    }
