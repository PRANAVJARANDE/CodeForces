#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    int maxi=0,in=n-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]-'a'<=k)
        {
            maxi=max(maxi,s[i]-'a');
        }
        else
        {
            in=i;
            break;
        }
    }
    
    char m1=s[in]-k+maxi,m2=s[in];
    for(int i=0;i<n;i++)
    {
        if(s[i]-'a'<=maxi)s[i]='a';
        else if(s[i]<=m2 && s[i]>=m1)s[i]=m1;
    }
    cout<<s<<endl;
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
