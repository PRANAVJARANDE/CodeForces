#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int d,s;cin>>d>>s;
            if(m.find(d)!=m.end())
            {
                m[d]=min(m[d],s);
            }
            else
            {
                m[d]=s;
            }
        }
        int ans=INT_MAX;
        for(auto x: m)
        {
            int d=x.first;
            int s=x.second/2;
            if(x.second%2==0)
            {
                s--;
            }
            ans=min(ans,d+s);
        }
        cout<<ans<<endl;
    }
    return 0;
}
