    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
       
    bool cmp(const vector<long long>& a, const vector<long long>& b) {
        if (a[0] == b[0]) {
            return a[1] > b[1]; 
        }
        return a[0] < b[0]; 
    }
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
     
        int t;cin >> t;
        while (t--) 
        {
            long long n,p;cin>>n>>p;
            vector<int>a(n),b(n);
            for(int i=0;i<n;i++)cin>>a[i];
            for(int i=0;i<n;i++)cin>>b[i];
            vector<vector<long long>> v1;
            for(int i=0;i<n;i++)
                v1.push_back({b[i],a[i]});
            
            sort(v1.begin(),v1.end(),cmp);
            
            long long s=n-1;
            long long ans=p;
            for(int i=0;i<n;i++)
            {
                ans+=min(p,v1[i][0])*min(s,v1[i][1]);
                s-=v1[i][1];
                if(s<=0)
                {
                    break;
                }
            }
            cout<<ans<<endl;
        }
        return 0;
    }
