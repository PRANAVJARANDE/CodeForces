#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<string>v1(n);
    vector<unordered_map<int, int>> m(6);
    vector<int>sum(n);

    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        int l = v1[i].size();  
        int s = 0;
        for(int j=0;j<l;j++)
        {
            int yh=v1[i][j]-'0';
            s+=yh;
        }
        m[l][s]++;
        sum[i]=s;
    }
    
    long long ans = 0;
    for(int i=0;i<n;i++)
    {
        int s=sum[i];
        int x=0;
        for(int j=0;j<v1[i].size();j++)
        {
            x+=v1[i][j]-'0';
            if(j+1>v1[i].size()-j-1)
            {
                ans+=m[j+1+j+1-v1[i].size()][2*x-s];
            }
        }
        x=0;
        for(int j=0;j<v1[i].size();j++)
        {
            x+=v1[i][v1[i].size()-1-j]-'0';
            if(j+1>v1[i].size()-j-1)
            {
                ans+=m[j+1+j+1-v1[i].size()][2*x-s];
            }
        }
        ans-=m[v1[i].size()][s];
    }
    cout<<ans<<endl;
    return 0;
}
