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

ll ask_mul(ll y)
{
    cout<<"mul "<<y<<endl;
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
    ask_mul(9);
    ask_digit();
    ask_digit();
    ask_add(n-9);
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
