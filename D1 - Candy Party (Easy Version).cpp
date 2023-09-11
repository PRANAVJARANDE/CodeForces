#include <bits/stdc++.h>
using namespace std;

void solve()
{
        int n;cin>>n;
        vector<long long>v1(n);
        long long s=0;
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
            s+=v1[i];
        }
        if(s%n!=0)
        {
            cout<<"No"<<endl;
            return;
        }
        s=s/n;
        
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            if(v1[i]==s)
            {
                continue;
            }
            bool fg=0;
            
                for(int p=0;p<31;p++)
                {
                    for(int q=0;q<31;q++)
                    {
                        if(v1[i]-(1<<p)+(1<<q)==s)
                        {
                            fg=1;
                            m[p]++;
                            m[q]--;
                            break;
                        }
                    }
                    if(fg==1)
                    {
                        break;
                    }
                }
                if(fg==0)
                {
                    cout<<"No"<<endl;
                    return;
                }
        }
        for(auto x:m)
        {
            if(x.second!=0)
            {
                cout<<"No"<<endl;
                return;
            }
        }
        cout<<"Yes"<<endl;
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
