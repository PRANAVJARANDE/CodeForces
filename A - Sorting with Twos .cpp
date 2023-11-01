#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    int i=2;
    int maxi=v1[i];
    while(i<n)
    {
        if((i & (i-1))==0)
        {
            maxi=v1[i];
        }
        else
        {
            if(maxi>v1[i])
            {
                cout<<"NO"<<endl;
                return;
            }
            else
            {
                maxi=v1[i];
            }
        }
        i++;
    }
    cout<<"YES"<<endl;
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
