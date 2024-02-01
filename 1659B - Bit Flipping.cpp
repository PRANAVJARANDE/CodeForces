#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    vector<ll> f(n,0);
    if(k%2==0)
    {
        ll tk=k;
        for(int i=0;i<n && tk>0;i++)
        {
            if(s[i]=='0')
            {
                f[i]=1;
                tk--;
            }
        }
        f[n-1]+=tk;
        for(int i=0;i<n;i++)
        {
            if(f[i]%2==1)
            {
                if(s[i]=='0')s[i]='1';
                else s[i]='0';
            }
        }
        cout<<s<<endl;
        for(ll x: f)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    else
    {
        ll tk=k;
        for(int i=0;i<n && tk>0;i++)
        {
            if(s[i]=='1')
            {
                f[i]=1;
                tk--;
            }
        }
        f[n-1]+=tk;
        for(int i=0;i<n;i++)
        {
            if(f[i]%2==0)
            {
                if(s[i]=='0')s[i]='1';
                else s[i]='0';
            }
        }
        cout<<s<<endl;
        for(ll x: f)
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
