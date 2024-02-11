#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll a,b;cin>>a>>b;
    bool bb=0;
    if(a%2==1 && b%2==1)
    {
        cout<<"No"<<endl;
    }
    else if(a%2==0 && b%2==1)
    {
        if(2*b==a)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    else if(a%2==1 && b%2==0)
    {
        if(2*a==b)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    else 
    {
        cout<<"Yes"<<endl;
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
