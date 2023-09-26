        #include <bits/stdc++.h>
        using namespace std;
     
        void solve()
        {
                int n;cin>>n;
                unordered_set<int>s;
                vector<unordered_set<int>> v1;
                for(int i=0;i<n;i++)
                {
                    int k;cin>>k;
                    unordered_set<int>d;
                    for(int i=0;i<k;i++)
                    {
                        int x;cin>>x;
                        d.insert(x);
                        s.insert(x);
                    }
                    v1.push_back(d);
                }
     
                int ans=INT_MIN;
                for(auto t: s)
                {
                    unordered_set<int> c;
                    for(int i=0;i<n;i++)
                    {
                        if(v1[i].find(t)==v1[i].end())
                        {
                            for(int z: v1[i])
                            {
                                c.insert(z);
                            }
                        }
                    }
                    ans=max(ans,(int)c.size());
                }
                cout<<ans<<endl;
        }
     
     
     
        int main() 
        {
            long long t;cin >> t;
            while (t--) 
            {
                solve();
            }
            return 0;
        }
