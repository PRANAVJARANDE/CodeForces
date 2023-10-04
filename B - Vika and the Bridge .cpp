#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        int n,k;cin>>n>>k;
        vector<vector<int>> fre(k+1);
        for(int i=1;i<=k;i++)
        {
            fre[i].push_back(0);
        }
        for(int i=0;i<n;i++)
        {
            int c;cin>>c;
            fre[c].push_back(i+1);
        }
        for(int i=1;i<=k;i++)
        {
            fre[i].push_back(n+1);
        }    

        int ans=n/2;
        for(int i=1;i<=k;i++)
        {
            int smax=0,fmax=0;
            for(int j=0;j<fre[i].size()-1;j++)
            {
                int di=fre[i][j+1]-fre[i][j]-1;
                if(di>=fmax)
                {
                    smax=fmax;
                    fmax=di;
                }
                else if(di>=smax)
                {
                    smax=di;
                }
            }
            ans=min(ans,max(smax,fmax/2));
        }
        cout<<ans<<endl;
    }
    return 0;
}
