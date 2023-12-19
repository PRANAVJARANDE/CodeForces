    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long
 
    void solve()
    {
        int n;cin>>n;
        vector<vector<ll>>a,b,c;
        for(int i=0;i<n;i++)
        {
            ll temp;cin>>temp;
            a.push_back({temp,i});
        }
        for(int i=0;i<n;i++)
        {
            ll temp;cin>>temp;
            b.push_back({temp,i});
        }
        for(int i=0;i<n;i++)
        {
            ll temp;cin>>temp;
            c.push_back({temp,i});
        }
 
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
 
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        reverse(c.begin(),c.end());
 
 
        ll ans=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int f=0;f<3;f++)
                {
                    ll exp=a[i][0]+b[j][0]+c[f][0];
                    int i1=a[i][1];
                    int i2=b[j][1];
                    int i3=c[f][1];
 
                    if(i1!=i2 && i2!=i3 && i1!=i3)
                    {
                        ans=max(ans,exp);
                    }
                }
            }
        }
        cout<<ans<<endl;
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
