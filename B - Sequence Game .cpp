#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int n;cin>>n; 
        vector<int> v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        vector<int>ans;
        ans.push_back(v1[0]);
        for(int i=1;i<n;i++)
        {
            if(ans.back()>v1[i])
            {
                ans.push_back(1);
            }
            ans.push_back(v1[i]);
        }
        cout<<ans.size()<<endl;
        for(int x: ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
