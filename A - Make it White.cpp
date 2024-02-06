#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
 
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            v1.push_back(i);
        }
    }
    if(v1.size()==0)
    {
        cout<<"0"<<endl;
        return;
    }
    int ans=v1.back()-v1[0]+1;
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
