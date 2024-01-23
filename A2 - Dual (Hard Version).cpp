#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n+1);
    int c1=0,c2=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<0) c2++;
        else if(a[i]>0) c1++;
    }
    
    vector<vector<int>> res;    
    if(c1>=13)
    {
        int mand=-1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]>0)
            {
                mand=i;
                break;
            }
        }
        for(int i=0;i<5;i++) res.push_back({mand,mand});
        for(int i=1;i<=n;i++) if(a[i]<0)res.push_back({i,mand});
        for(int i=2;i<=n;i++) res.push_back({i,i-1});

        cout<<(int)res.size()<<endl;
        for(auto x: res) cout<<x[0]<<" "<<x[1]<<endl;
    }
    else if(c2>=13)
    {
        int mind=-1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]<0)
            {
                mind=i;
                break;
            }
        }
        for(int i=0;i<5;i++) res.push_back({mind,mind});
        for(int i=1;i<=n;i++) if(a[i]>0)res.push_back({i,mind});
        for(int i=n;i>1;i--) res.push_back({i-1,i});

        cout<<(int)res.size()<<endl;
        for(auto x: res) cout<<x[0]<<" "<<x[1]<<endl;
    }
    else
    {
        int in=0;
        for(int i=1;i<=n;i++)
        {
            if(abs(a[i])>abs(a[in]))
            {
                in=i;
            }
        }
        if(a[in]==0)
        {
            cout<<"0"<<endl;
        }
        else if(a[in]>0)
        {
            for(int i=1;i<=n;i++) if(a[i]<0)res.push_back({i,in});  
            for(int i=2;i<=n;i++) res.push_back({i,i-1});
            cout<<(int)res.size()<<endl;
            for(auto x: res) cout<<x[0]<<" "<<x[1]<<endl;
        }
        else
        {
            for(int i=1;i<=n;i++) if(a[i]>0)res.push_back({i,in});
            for(int i=n;i>1;i--) res.push_back({i-1,i});
            cout<<(int)res.size()<<endl;
            for(auto x: res) cout<<x[0]<<" "<<x[1]<<endl;
        }
    }
}


int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
