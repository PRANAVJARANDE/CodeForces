#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        vector<vector<int>> v1;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            v1.push_back({a,i});
        }
        sort(v1.begin(),v1.end(),greater<vector<int>>());
        vector<int>ans(n);
        int k=1;
        for(auto x: v1)
        {
            ans[x[1]]=k;
            k++;
        }
        for(int x: ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
