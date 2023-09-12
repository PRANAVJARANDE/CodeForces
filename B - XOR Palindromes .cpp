#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t;cin >> t;
    while (t--) 
    {
        int n;cin>>n;
        string s;cin>>s;
        int tc=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                tc++;
            }
        }

        string ans(n+1,'0');
        if(n%2==1)
        {
            for(int i=tc;i<=n-tc;i++)
                ans[i]='1';
        }
        else
        {
            for(int i=tc;i<=n-tc;i+=2)
                ans[i]='1';
        }
        cout<<ans<<endl;
    }
    return 0;
}
