#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long
 
void solve()
{
    int n,k;cin>>n>>k;
    vector<vector<int>> a(n,vector<int>(2,0));
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];
        a[i][1]=i+1;
    }
 
    sort(a.begin(),a.end());
    int c=0;
    for(int i=0;i<n;i++)
    {
        int d=abs(a[i][0]-a[i][1]);
        if(d%k!=0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"0"<<endl;
    }
    else if(c==2)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
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
