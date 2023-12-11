#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,x;cin>>n>>x;
    vector<vector<int>> a;
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        int c;cin>>c;
        a.push_back({c,i});
    }
    for(int i=0;i<n;i++)cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    vector<int>ans(n);
    for(int i=0;i<n-x;i++)
    {
        if(a[i][0]<=b[i+x])
        {
            ans[a[i][1]]=b[i+x];
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    for(int i=n-x;i<n;i++)
    {
        if(a[i][0]>b[(i+x)%n])
        {
            ans[a[i][1]]=b[(i+x)%n];
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }



    cout<<"YES"<<endl;
    for(int x: ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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
