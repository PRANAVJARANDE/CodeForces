#include <bits/stdc++.h>
using namespace std;
#define MOD (int)(1e9 + 7)
#define ll long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int> psum(n,0);
    psum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        psum[i]=psum[i-1]^a[i];
    }

    if(psum[n-1]==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(psum[i]==(psum[j] ^ psum[i]) && psum[i]==(psum[n-1] ^ psum[j]))
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

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
