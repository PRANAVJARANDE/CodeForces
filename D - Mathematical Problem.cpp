#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<"196"<<string(n-3,'0')<<endl;
    for(int i=0;i<n/2;i++)
    {
        cout<<"9"<<string(i,'0')<<"6"<<string(i,'0')<<"1"<<string(n-2*i-3,'0')<<endl;
        cout<<"1"<<string(i,'0')<<"6"<<string(i,'0')<<"9"<<string(n-2*i-3,'0')<<endl;
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
