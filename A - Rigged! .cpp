#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int ts,te;cin>>ts>>te;
    vector<int>s(n-1),e(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>s[i]>>e[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>=ts && e[i]>=te)
        {
            cout<<"-1"<<endl;
            return;
        }
    }   
    cout<<ts<<endl; 
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
