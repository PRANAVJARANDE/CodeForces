#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;

    int t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<int>v1(n);
        for(int i=0;i<n;i++)
            cin>>v1[i];
        
        unordered_map<int,int> m;
        int z=0;
        m[0]=1;
        for(int i=0;i<n;i++)
        {   
            z=z^v1[i];
            m[z]=1;
        }
        int ans=0;
        for(auto x: m)
        {
            for(auto y: m)
            {
                ans=max(ans,x.first^y.first);
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
