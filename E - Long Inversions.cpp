#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    for(int k=n;k>=1;k--)
    {
        vector<int> flip(n+1,0);
        int t=1;
        for(int i=0;i<=n-k;i++)
        {
            if(flip[i]==1)
            {
                if(t==0)t=1;
                else t=0;
            }
            int an=s[i]-'0';
            if(an!=t)
            {
                flip[k+i]=1;
                if(t==0)t=1;
                else t=0;
            }
        }
 
        bool b=0;
        for(int i=n-k+1;i<n;i++)
        {
            if(flip[i]==1)
            {
                if(t==0)t=1;
                else t=0;
            }
 
            int an=s[i]-'0';
            if(an!=t)
            {
                b=1;
                break;
            }
        }
        if(b==0)
        {
            cout<<k<<endl;
            return;
        }
    }
    cout<<"1"<<endl;
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
