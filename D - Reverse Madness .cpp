        #include <bits/stdc++.h>
        using namespace std;
              
        int main() 
        {
            int t;cin >> t;
            while (t--) 
            {
                int n,k;cin>>n>>k;
                string s;cin>>s;
                vector<int>l(k+1),r(k+1);
                for(int i=1;i<=k;i++)cin>>l[i];
                for(int i=1;i<=k;i++)cin>>r[i];
                vector<int>idx(n+1);
                for(int i=1;i<=k;i++)
                {
                    for(int j=l[i];j<=r[i];j++)
                    {
                        idx[j]=i;
                    }
                }
                int q;cin>>q;
                vector<int> d1(n+3,0);
                while(q--)
                {
                    int x;cin>>x;
                    int in=idx[x];
                    int a=min(x,r[in]+l[in]-x);
                    int b=max(x,r[in]+l[in]-x);
                    d1[a]++;
                    d1[b+1]--;
                }
                long long sum=0;
                for(int i=1;i<=n;i++)
                {
                    sum+=d1[i];
                    if(sum&1)
                    {
                        int p=idx[i];
                        int x=r[p]-(i-l[p]);
                        swap(s[i-1],s[x-1]);
                        d1[x]--;
                        d1[x+1]++;
                        if(x==i)
                        {
                            sum--;
                        }
                    }
                }
                cout<<s<<"\n";
            }
            return 0;
        }
