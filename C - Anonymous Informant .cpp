#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v1(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    k=min(k,n);
    int in=n-1;
    while(k--)
    {
        if(n<v1[in])
        {
            cout<<"No"<<endl;
            return;
        }
        in=in-v1[in];
        if(in<0)
        {
            in=n+in;
        }
    }
    cout<<"Yes"<<endl;
}

int main() 
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
    int t;cin >> t;
    while (t--)solve();
    return 0;
}
