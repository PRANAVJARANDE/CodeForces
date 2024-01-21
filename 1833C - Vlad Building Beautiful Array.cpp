#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int>a(n);
    int oc=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            oc++;
        }
        mini=min(mini,a[i]);
    }
    if(oc==n || oc==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(mini%2==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
