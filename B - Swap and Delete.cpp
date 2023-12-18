#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    string s;cin>>s;
    int n=s.size();
 
    int zc=0,oc=0;
    for(char x: s) 
    {
        if(x=='0')
        {
            zc++;
        }
        else 
        {
            oc++;
        }
    }
 
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            zc--;
            if(zc<0)
            {
                cout<<n-i<<endl;
                return;
            }
        }
        else
        {
            oc--;
            if(oc<0)
            {
                cout<<n-i<<endl;
                return;
            }
        }
    }
    cout<<"0"<<endl;
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
