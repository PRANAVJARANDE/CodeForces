#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k;cin>>n>>k;
    vector<int> a;
    int p=1;
    while(2*p<=k)
    {
        a.push_back(p);
        p*=2;
    }
    a.push_back(k-p);
    a.push_back(k+1);
    a.push_back(k+2);
    a.push_back(k+3);
    p=(1<<19);
    while(p>k)
    {
        a.push_back(p);
        p/=2;
    }
    cout<<(int)a.size()<<endl;
    for(int x: a)
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
