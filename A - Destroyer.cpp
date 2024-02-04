#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int> freq(100,0);
    int mini=0;
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        mini=max(mini,temp);
        freq[temp]++;
    }

    int maxi=INT_MAX;
    for(int i=0;i<=mini;i++)
    {
        if(maxi<freq[i])
        {
            cout<<"NO"<<endl;
            return;
        }
        maxi=min(maxi,freq[i]);
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
