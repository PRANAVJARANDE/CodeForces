#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int>v1(n+1,0);
    for(int i=0;i<n;i++)cin>>v1[i];

    if(v1[0]!=n)
    {
        cout<<"NO"<<endl;
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(v1[v1[i]]>i)
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
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
