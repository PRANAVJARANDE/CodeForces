    #include <bits/stdc++.h>
    using namespace std;
    #define MOD (int)(1e9 + 7)
    #define ll long long
     
    int cbi(int num) {
        int count = 0;
        while (num) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
     
    int flb(int num) {
        if (num == 0) {
            return -1; 
        }
     
        int position = 0;
        while ((num & 1) == 0) {
            num >>= 1;
            position++;
        }
        return position + 1;
    }
     
    int main() 
    {
        ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
        int t;cin >> t;
        while (t--) 
        {
            int n;cin>>n;
            vector<ll> v1(n);
            for(int i=0;i<n;i++)cin>>v1[i];
     
            unordered_map<int,int> m,po;
            long long ans=0;
            for(int i=0;i<n;i++)
            {
                if(cbi(v1[i])==1)
                {
                    int dis=v1[i]-flb(v1[i]);
                    po[dis]++;
                    if(po[dis]>1)
                    {
                        ans+=po[dis]-1;
                    }
                }
                else
                {
                    m[v1[i]]++;
                    if(m[v1[i]]>1)
                    {
                        ans+=m[v1[i]]-1;
                    }
                }
            }
            cout<<ans<<endl;
        }
        return 0;
    }
