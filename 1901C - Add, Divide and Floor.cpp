#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    vector<ll>a(n);
    ll maxi=LLONG_MIN,mini=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    ll diff=maxi-mini;
    if(diff==0)
    {
        cout<<"0"<<endl;
        return;
    }

    vector<int> res;
    while(maxi!=mini)
    {
        if(mini%2==0)
        {
            mini=mini/2;
            maxi=maxi/2;
            res.push_back(0);
        }
        else
        {
            mini=(mini+1)/2;
            maxi=(maxi+1)/2;
            res.push_back(1);
        }
    }

    cout<<res.size()<<endl;
    if(res.size()<=n)
    {
        for(int x: res)
        {
            cout<<x<<" ";
        }
        cout<<endl;
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
