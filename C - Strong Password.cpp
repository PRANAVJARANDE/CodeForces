#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    string s;cin>>s;
    int n=s.size();
    int m;cin>>m;
    string l,r;cin>>l>>r;

    int t2=0;
    for(int i=0;i<m;i++)
    {
        int lb=l[i]-'0';
        int rb=r[i]-'0';
        int t1=t2;
        for(int j=lb;j<=rb;j++)
        {
            int in=t2;
            while(in<n && s[in]-'0'!=j)
            {
                in++;
            }
            t1=max(t1,in);
        }
        t2=t1+1;
    }

    if(t2>n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
