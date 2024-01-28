#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    ll n,k,m;cin>>n>>k>>m;
    string s;cin>>s;
    set<char> s1;
    string ans="";
    for(char c: s)
    {
        s1.insert(c);
        if(s1.size()==k)
        {
            ans=ans+c;
            s1.clear();
        }

        if(ans.size()==n)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    
    cout<<"NO"<<endl;
    for(int i=0;i<k;i++)
    {
        char ch='a'+i;
        if(s1.count(ch)==0)
        {
            while(ans.size()<n)
            {
                ans=ans+ch;
            }
            break;
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
