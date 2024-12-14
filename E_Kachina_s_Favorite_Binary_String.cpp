#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

//Interactive problem
ll ask(int i,int j)
{
    cout<<"? "<<i+1<<" "<<j+1<<endl;
    cout.flush();
    ll res;cin>>res;
    return res;
}

void solve()
{
    ll n;cin>>n;
    string s(n,'0');

    vector<ll> res(n,0);
    bool b=0;
    ll in=0;
    for(int i=1;i<n;i++)
    {
        res[i]=ask(0,i);
        if(b==0 && res[i]!=0)
        {
            b=1;
            in=i;
        }
    }
    if(b==0)
    {
        cout<<"! IMPOSSIBLE"<<endl;
        return;
    }
    
    ll tone=in-res[in];
    ll j=0;
    while(tone--)
    {
        s[j]='1';
        j++;
    }
    for(int j=in;j<n;j++)
    {
        if(res[j]>res[j-1])s[j]='1';
    }   
    cout<<"! "<<s<<endl;
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
