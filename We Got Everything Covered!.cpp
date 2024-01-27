#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,k;cin>>n>>k;
    string s;
    for(int i=0;i<k;i++)
    {
        char ch='a'+i;
        s=s+ch;
    }
    for(int i=0;i<n;i++)
    {
        cout<<s;
    }
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
