#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    char l,n;cin>>l>>n;
    for(int i=0;i<8;i++)
    {
        char ch='1'+i;
        if(ch==n)
        {
            continue;
        }
        cout<<l<<ch<<endl;
    }
    for(int i=0;i<8;i++)
    {
        char ch='a'+i;
        if(ch==l)
        {
            continue;
        }
        cout<<ch<<n<<endl;
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
