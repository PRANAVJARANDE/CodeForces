#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

bool check(int k,string s,int n)
{
    int cnt=0;
    for(int i=0;i<k;i++)
    {
        for(int j=i+k;j<n;j+=k)
        {
            if(s[i]!=s[j])
            {
                cnt++;
                if(cnt>=2)return 0;
            }
        }
    }
    return 1;
}

bool check1(int k,string s,int n)
{
    int cnt=0;
    for(int i=n-k;i<n;i++)
    {
        for(int j=i-k;j>=0;j-=k)
        {
            if(s[i]!=s[j])
            {
                cnt++;
                if(cnt>=2)return 0;
            }
        }
    }
    return 1;
}

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    
    int ans=n;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(check(i,s,n) || check1(i,s,n))
            {
                ans=min(ans,i);
            }
            if(check(n/i,s,n) || check1(n/i,s,n))
            {
                ans=min(ans,n/i);
            }
        }
    }
    cout<<ans<<endl;
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
