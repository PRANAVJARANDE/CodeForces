#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
        vector<vector<int>> v1(n);
        for(int i=0;i<n;i++)
        {
            int a,b;cin>>a>>b;
            v1.push_back({a,b});
        }
        sort(v1.begin(),v1.end(),greater<vector<int>>());
        int mini=v1[0][1];
        for(int i=1;i<n;i++)
        {
            if(v1[i][1]>mini)
            {
                cout<<"Happy Alex"<<endl;
                return;
            }  
            mini=min(mini,v1[i][1]);    
        }
        cout<<"Poor Alex"<<endl;
}

int main() 
{
    solve();
    return 0;
}
