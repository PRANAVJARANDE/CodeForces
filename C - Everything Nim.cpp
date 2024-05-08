#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<ll>a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());

    if(n==1)
    {
        cout<<"Alice"<<endl;
        return;
    }
    if(a[0]!=1)
    {
        cout<<"Alice"<<endl;
        return;
    }
    if(n==2)
    {
        if(a[0]==a[1])
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
        return;
    }
    //b==0 alice win
    bool b=0;
    for(int i=0;i<n-1;i++)
    {
        ll u=abs(a[i]-a[i+1]);
        if(u==0)continue;
        else if(u==1)
        {
            if(b==0)b=1;
            else b=0;
        }
        if(u>1)
        {
            if(b==1)cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
            return;
        }
    }

    if(b==0)cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;


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
