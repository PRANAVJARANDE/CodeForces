#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;

    int c=0;
    for(int i=0;i<n;i++) if(s[i]=='B')c++;
    if(c==k) 
    {
        cout<<"0"<<endl;
        return;
    }

    cout<<"1"<<endl;
    if(c<k)
    {
        int in=0;
        for(int i=0;i<n && c<k;i++)
        {
            if(s[i]=='A')
            {
                c++;
            }
            in++;
        }
        cout<<in<<" "<<"B"<<endl;
    }
    else
    {
        int in=0;
        int rem=c-k;
        int j=0;
        for(int i=0;i<n && j<rem;i++)
        {
            if(s[i]=='B')
            {
                j++;
            }
            in++;
        }
        cout<<in<<" "<<"A"<<endl;
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
