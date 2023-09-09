#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n;cin>>n;
        vector<vector<int>>v1(n+1);
        vector<bool>kvis(n+1,0),gvis(n+1,0);
        for(int i=1;i<=n;i++)
        {
            int k;cin>>k;
            for(int j=0;j<k;j++)
            {
                int temp;cin>>temp;
                v1[i].push_back(temp);
            }
        }

            for(int i=1;i<=n;i++)
            {
                for(int x:v1[i])
                {
                    if(gvis[x]==0)
                    {
                        gvis[x]=1;
                        kvis[i]=1;
                        break;
                    }
                }
            }
            int a=-1,b=-1;
            for(int i=1;i<=n;i++)
            {
                if(kvis[i]==0)
                {
                    a=i;
                    break;
                }
            }
            for(int i=1;i<=n;i++)
            {
                if(gvis[i]==0)
                {
                    b=i;
                    break;
                }
            }
            if(a==-1 || b==-1)
            {
                cout<<"OPTIMAL"<<endl;
            }
            else {
                cout<<"IMPROVE"<<endl;
                cout<<a<<" "<<b<<endl;
            }
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
