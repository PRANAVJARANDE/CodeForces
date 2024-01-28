#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

int eqi(ll a)
{
    int k=0;
    while(a!=0)
    {
        a/=10;
        k++;
    }
    return k;
}

void solve()
{
    ll n;cin>>n;
    priority_queue<ll>a,b;
    for(int i=0;i<n;i++)
    {
        ll d;cin>>d;
        a.push(d);
    }
    for(int i=0;i<n;i++)
    {
        ll d;cin>>d;
        b.push(d);
    }

    ll ans=0;
    while(!a.empty())
    {
        ll a1=a.top();
        ll b1=b.top();
        if(a1==b1)
        {
            a.pop();
            b.pop();
        }
        else if(a1>b1)
        {
            ans++;
            a.pop();
            a.push(eqi(a1));
        }
        else
        {
            ans++;
            b.pop();
            b.push(eqi(b1));
        }
    }
    cout<<ans<<endl;
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
