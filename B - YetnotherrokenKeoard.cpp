#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    string s;cin>>s;
    int n=s.size();
    vector<int>ss,bb;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='b')
        {
            if(ss.size()!=0)
            {
                s[ss.back()]='#';
                ss.pop_back();
            }
        }
        else if(s[i]=='B')
        {
            if(bb.size()!=0)
            {
                s[bb.back()]='#';
                bb.pop_back();
            }
        }
        else if(s[i]<='z' && s[i]>='a')
        {
            ss.push_back(i);
        }
        else
        {
            bb.push_back(i);
        }
    }
    for(char x: s)
    {
        if(x=='#' || x=='B' || x=='b')
        {
            continue;
        }
        else
        {
            cout<<x;
        }
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
