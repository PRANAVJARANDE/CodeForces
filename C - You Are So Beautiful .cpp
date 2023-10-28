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
            vector<int> v1(n);
            
            for(int i=0;i<n;i++)cin>>v1[i];
            
     
            vector<int> pr(n,0);
            multiset<int> r;
            for(int i=n-1;i>=0;i--)
            {
                if(r.find(v1[i])==r.end())
                {
                    r.insert(v1[i]);
                    pr[i]++;
                }
            }
            for(int i=n-2;i>=0;i--)
            {
                pr[i]+=pr[i+1];
            }
            
            long long ans=0;
            multiset<int> l;
            for(int i=0;i<n;i++)
            {
                if(l.find(v1[i])==l.end())
                {
                    ans+=pr[i];
                    l.insert(v1[i]);
                }
            }
            cout<<ans<<endl;
        }
        return 0;
    }
