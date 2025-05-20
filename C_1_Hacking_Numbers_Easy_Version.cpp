#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

//Interactive problem
ll ask(int i,int j)
{
    cout<<"? "<<i<<" "<<j<<endl;
    cout.flush();
    ll res;cin>>res;
    return res;
}

ll ask_digit()
{
    cout<<"digit"<<endl;
    cout.flush();
    ll res;cin>>res;
    return res;
}


ll ask_add(ll y)
{
    cout<<"add "<<y<<endl;
    cout.flush();
    ll res;cin>>res;
    return res;
}

void solve()
{
    ll n;cin>>n;
    ask_digit();
    ask_digit();
    ask_add(-8);
    ask_add(-4);
    ask_add(-2);
    ask_add(-1);
    ask_add(n-1);
    cout<<"!"<<endl;
    ll x;cin>>x;
    
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
