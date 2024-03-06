#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    set<int> s1,s2;
    for(int i=0;i<=n;i++)
    {
        s1.insert(i);
        s2.insert(i);
    }

    vector<int> mf(n,0),mb(n,0);
    for(int i=0;i<n;i++)
    {
        s1.erase(a[i]);
        mf[i]=*s1.begin();
    }
    
    for(int i=n-1;i>=0;i--)
    {
        s2.erase(a[i]);
        mb[i]=*s2.begin();
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(mf[i]==mb[i+1])
        {
            cout<<"2"<<endl;
            cout<<"1 "<<i+1<<endl;
            cout<<i+2<<" "<<n<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
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
