#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n;cin>>n;
    if(n==2)
    {
        cout<<"1 1"<<endl;
        cout<<"1 2"<<endl;
        cout<<endl;
        return;
    }
    if(n==3)
    {
        cout<<"2 1"<<endl;
        cout<<"2 3"<<endl;
        cout<<"3 1"<<endl;
        cout<<endl;
        return;
    }
    for(int i=1;i<=n-2;i++)
    {
        cout<<i<<" "<<i<<endl;
    }    
    cout<<n<<" "<<n-1<<endl;
    cout<<n<<" "<<n<<endl;
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
